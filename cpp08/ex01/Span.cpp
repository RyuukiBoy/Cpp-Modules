/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:18:20 by oait-bad          #+#    #+#             */
/*   Updated: 2024/02/14 09:58:22 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : n(0)
{
}

Span::Span(unsigned int n) : n(n)
{
}

Span::Span(Span const & src)
{
    *this = src;
}

Span & Span::operator=(Span const & src)
{
    if (this != &src)
    {
        this->n = src.n;
        this->arr = src.arr;
    }
    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int num)
{
    if (arr.size() < n)
        arr.push_back(num);
    else
        throw FullSpan();
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (arr.size() + std::distance(begin, end) <= n)
        arr.insert(arr.end(), begin, end);
    else
        throw FullSpan();
}

int Span::shortestSpan()
{
    if (arr.size() <= 1)
        throw NoSpan();
    std::sort(arr.begin(), arr.end());
    int min = arr[1] - arr[0];
    for (unsigned int i = 2; i < arr.size(); i++)
    {
        if (arr[i] - arr[i - 1] < min)
            min = arr[i] - arr[i - 1];
    }
    return min;
}

int Span::longestSpan()
{
    if (arr.size() <= 1)
        throw NoSpan();
    std::sort(arr.begin(), arr.end());
    return arr[arr.size() - 1] - arr[0];
}

