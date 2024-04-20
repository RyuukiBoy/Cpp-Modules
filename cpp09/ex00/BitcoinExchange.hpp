/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:39:57 by oait-bad          #+#    #+#             */
/*   Updated: 2024/04/18 09:29:53 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>

class BitcoinExchange 
{
    private :
        std::map<std::string, double> _data;
    public :
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange const & src);
        BitcoinExchange & operator=(BitcoinExchange const & src);
        ~BitcoinExchange();
        void readData();
        void InputFile(std::string infile);
        void printOutput(std::string date, double price);
        int parseData(int year, int month, int day, double value, std::string line);
};

#endif