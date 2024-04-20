/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:57:41 by oait-bad          #+#    #+#             */
/*   Updated: 2024/04/17 23:57:41 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <climits>
#include <list>
#include <deque>
#include <iterator>
#include <ctime>
#include <algorithm>
#include <stdexcept>

bool isValidNumber(std::string const &in);
bool isValidInput(char **av);
void printBefore(char **av);

void listInsert(std::list<int> &sorted, int const &nb);
void listMergeInsertionSort(std::list<int> &list);
void sortList(std::list<int> &list, char **av, double &time);
void printListAfter(std::list<int> &list);

void dequeInsert(std::deque<int> &sorted, int const &nb);
void dequeMergeInsertionSort(std::deque<int> &deque);
void sortDeque(std::deque<int> &deque, char **av, double &time);
void printDequeAfter(std::deque<int> &deque);

#endif