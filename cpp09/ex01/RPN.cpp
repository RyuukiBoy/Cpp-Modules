/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:58:39 by oait-bad          #+#    #+#             */
/*   Updated: 2024/04/17 23:58:39 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() 
{
}

RPN::RPN(RPN const &other) 
{
    *this = other;
}

RPN &RPN::operator=(RPN const &other) 
{
    if (this != &other)
    {
        _stack = other._stack;
    }
    return *this;
}

RPN::~RPN() 
{
}

void RPN::CalculateIn(std::string const &str) 
{
    std::string token = "+-*/%";
    int num = 0;
    int op = 0;

    for (size_t i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
        {
            num++;
            _stack.push(str[i] - '0');
        }
        else if (token.find(str[i]) != std::string::npos)
        {
            op++;
            if (_stack.size() < 2)
            {
                std::cout << "Error: not enough numbers" << std::endl;
                exit(1);
            }
            int a = _stack.top();
            _stack.pop();
            int b = _stack.top();
            _stack.pop();
            if (str[i] == '+')
                _stack.push(b + a);
            else if (str[i] == '-')
                _stack.push(b - a);
            else if (str[i] == '*')
                _stack.push(b * a);
            else if (str[i] == '/')
            {
                if (a == 0)
                {
                    std::cout << "Error: division by zero" << std::endl;
                    exit(1);
                }
                _stack.push(b / a);
            }
            else if (str[i] == '%')
            {
                if (a == 0)
                {
                    std::cout << "Error: modulo by zero" << std::endl;
                    exit(1);
                }
                _stack.push(b % a);
            }
        }
        else if (str[i] != ' ')
        {
            std::cout << "Error: invalid character" << std::endl;
            exit(1);
        }
    }
    if (num <= op)
    {
        std::cout << "Error: not enough numbers" << std::endl;
        exit(1);
    }
    if (num > op + 1)
    {
        std::cout << "Error: too many numbers" << std::endl;
        exit(1);
    }
}

void RPN::display() const 
{
    if (_stack.size() != 1)
    {
        std::cout << "Error: too many numbers" << std::endl;
        exit(1);
    }
    std::cout << _stack.top() << std::endl;
}