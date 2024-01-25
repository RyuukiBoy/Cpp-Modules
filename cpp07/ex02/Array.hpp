/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:36:06 by oait-bad          #+#    #+#             */
/*   Updated: 2024/01/25 12:08:07 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
    private :
        T *arr;
        unsigned int size_n;
    public :
        Array()
        {
            arr = new T[0];
            size_n = 0;
        }
        Array(unsigned int n)
        {
            arr = new T[n];
            size_n = n;
        }
        Array(Array const & src)
        {
            *this = src;
        }
        Array & operator=(Array const & src)
        {
            if (this != &src)
            {
                delete [] this->arr;
                this->size_n = src.size_n;
                this->arr = new T[this->size_n];
                for (unsigned int i = 0; i < this->size_n; i++)
                    this->arr[i] = src.arr[i];
            }
            return *this;
        }
        ~Array()
        {
            delete [] this->arr;
        }
        T & operator[](unsigned int i)
        {
            if (i >= this->size_n)
                throw std::exception();
            return this->arr[i];
        }
        unsigned int size() const
        {
            return size_n;
        }
};

#endif