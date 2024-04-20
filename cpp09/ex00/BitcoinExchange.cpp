/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:43:45 by oait-bad          #+#    #+#             */
/*   Updated: 2024/04/18 00:09:26 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
    *this = src;
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & src)
{
    if (this != &src)
    {
        this->_data = src._data;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::readData()
{
    std::string line;
    std::ifstream file;

    file.open("data.csv");
    if (file.is_open())
    {
        while (!file.eof())
        {
            file >> line;
            std::string date = line.substr(0, 10).erase(4, 1).erase(6, 1);
            std::string value = line.substr(11, line.length());
            this->_data.insert(std::make_pair(date, strtod(value.c_str(), NULL)));
        }
        file.close();
    }
    else
    {
        std::cout << "Unable to open file" << std::endl;
    }
}

int isValidNumber(std::string str)
{
    int flag = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]) && str[i] != '.')
            return (0);
        if (str[i] == '.')
            flag++;
    }
    if (flag > 1)
        return (0);
    return (1);
}

int BitcoinExchange::parseData(int year, int month, int day, double value, std::string line)
{
    size_t i = line.find("|");
    if (line[i + 1] != ' ' || line[i - 1] != ' ')
    {   
        std::cout << "Error: Bad Input => " << line << std::endl;
        return (1);
    }
    else if (line.substr(4, 1) != "-" || line.substr(7, 1) != "-")
    {
        std::cout << "Error: Invalid date form" << std::endl;
        return (1);
    }
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (value < 0.00 || value > 1000.00)
    {
        std::cout << "Error: Invalid value" << std::endl;
        return (1);
    }
    else if (year < 2009 || month < 1 || month > 12 || day < 1 || day > months[month - 1])
    {
        std::cout << "Error: Invalid date" << std::endl;
        return (1);
    }
    return (0);
}

void BitcoinExchange::InputFile(std::string infile)
{
    std::string line;
    std::ifstream file;

    file.open(infile);
    if (!file.is_open())
    {
        std::cout << "Unable to open file" << std::endl;
        return;
    }
    std::getline(file, line);
    if (line != "date | value")
    {
        std::cout << "Error: Invalid data" << std::endl;
        return;
    }
    while (!file.eof())
    {
        std::getline(file, line);
        int d , m , y;
        std::string day , month , year, value;
        double price;
        if (line.length() < 14)
        {
            std::cout << "Error: Invalid Input Length" << std::endl;
            continue;
        }
        year = line.substr(0, 4);
        month = line.substr(5, 2);
        day = line.substr(8, 2);
        value = line.substr(13, line.length());
        d = atoi(day.c_str());
        m = atoi(month.c_str());
        y = atoi(year.c_str());
        price = strtod(value.c_str(), NULL);
        if (isValidNumber(value) == 0 || isValidNumber(year) == 0 || isValidNumber(month) == 0 || isValidNumber(day) == 0)
        {
            std::cout << "Error: Number Invalid" << std::endl;
            continue;
        }
        std::string date;
        if (m < 10 && d < 10)
            date = std::to_string(y * 10) + std::to_string(m * 10) + std::to_string(d);
        else if (d < 10)
            date = std::to_string(y) + std::to_string(m * 10) + std::to_string(d);
        else if (m < 10)
            date = std::to_string(y * 10) + std::to_string(m) + std::to_string(d);
        else
            date = std::to_string(y) + std::to_string(m) + std::to_string(d);
        if (parseData(y, m, d, price, line) == 0)
            printOutput(date, price);
    }
    file.close();
}

void BitcoinExchange::printOutput(std::string date, double price)
{
    if (date < this->_data.begin()->first)
    {
        std::cout << "No data before this date" << std::endl;
        return;
    }
    std::map<std::string, double>::iterator it = this->_data.upper_bound(date);
    it--;
    std::cout << date.insert(4, "-").insert(7, "-") << " => " << price << " " << " = " << price * it->second << std::endl;
}

