/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:58:02 by oait-bad          #+#    #+#             */
/*   Updated: 2024/04/17 23:58:02 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void listInsert(std::list<int> &sorted, int const &nb)
{
	std::list<int>::iterator it;

	for (it = sorted.begin(); it != sorted.end(); it++)
	{
		if (*it > nb)
		{
			sorted.insert(it, nb);
			return ;
		}
	}
	sorted.insert(it, nb);
}

void listMergeInsertionSort(std::list<int> &list)
{
	if (list.size() <= 2)
	{
		std::list<int> sorted;
		while (!list.empty())
		{
			int nb = list.front();
			list.pop_front();
			listInsert(sorted, nb);
		}
		list.swap(sorted);
		return ;
	}
	std::list<int> left, right;
	int middle = list.size() / 2;
	for (int i = 0; i < middle; i++)
	{
		left.push_back(list.front());
		list.pop_front();
	}
	right = list;
	listMergeInsertionSort(left);
	listMergeInsertionSort(right);
	list.clear();
	std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(list));

}

void sortList(std::list<int> &list, char **av, double &time)
{
	clock_t start = clock();

	for (int i = 0; av[i]; i++)
		list.push_back(std::atoi(av[i]));
	listMergeInsertionSort(list);
	clock_t end = clock();
	time = (double)(end - start) / ((double)CLOCKS_PER_SEC / 1000);
}

void printListAfter(std::list<int> &list)
{
	std::list<int>::iterator it;

	std::cout << "After:\t";
	for (it = list.begin(); it != list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void dequeInsert(std::deque<int> &sorted, int const &nb)
{
	std::deque<int>::iterator it;

	for (it = sorted.begin(); it != sorted.end(); it++)
	{
		if (*it > nb)
		{
			sorted.insert(it, nb);
			return ;
		}
	}
	sorted.insert(it, nb);
}

void dequeMergeInsertionSort(std::deque<int> &deque)
{
	if (deque.size() <= 2)
	{
		std::deque<int> sorted;
		while (!deque.empty())
		{
			int nb = deque.front();
			deque.pop_front();
			dequeInsert(sorted, nb);
		}
		deque.swap(sorted);
		return ;
	}
	std::deque<int> left, right;
	int middle = deque.size() / 2;
	for (int i = 0; i < middle; i++)
	{
		left.push_back(deque.front());
		deque.pop_front();
	}
	right = deque;
	dequeMergeInsertionSort(left);
	dequeMergeInsertionSort(right);
	deque.clear();
	std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(deque));
}

void sortDeque(std::deque<int> &deque, char **av, double &time)
{
	clock_t start = clock();

	for (int i = 0; av[i]; i++)
		deque.push_back(std::atoi(av[i]));
	dequeMergeInsertionSort(deque);
	clock_t end = clock();
	time = (double)(end - start) / ((double)CLOCKS_PER_SEC / 1000);
}

void printDequeAfter(std::deque<int> &deque)
{
	std::deque<int>::iterator it;

	std::cout << "After:\t";
	for (it = deque.begin(); it != deque.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}
