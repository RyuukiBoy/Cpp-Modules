/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:36:29 by oait-bad          #+#    #+#             */
/*   Updated: 2024/02/14 09:58:30 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
    private :
        unsigned int n;
        std::vector<int> arr;
    public :
        Span();
        Span(unsigned int n);
        Span(Span const & src);
        Span & operator=(Span const & src);
        ~Span();
        void addNumber(int num);
        void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
        class FullSpan : public std::exception
        {
            public :
                virtual const char* what() const throw()
                {
                    return "Span is full";
                }
    
        };
        class NoSpan : public std::exception
        {
            public :
                virtual const char* what() const throw()
                {
                    return "No Span to find";
                }
        };
};

#endif