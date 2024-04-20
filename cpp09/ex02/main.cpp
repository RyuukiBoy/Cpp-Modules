/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:58:20 by oait-bad          #+#    #+#             */
/*   Updated: 2024/04/17 23:58:20 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool isValidNumber(std::string const &in)
{
	double nb = std::atof(in.c_str());

	if (in.empty() || (in.find_first_not_of("0123456789") != std::string::npos)
		|| nb < 0 || nb > (double)INT_MAX)
		return (false);
	return (true);	
}

bool isValidInput(char **av)
{
	for (int i = 1; av[i]; i++)
		if (!isValidNumber(av[i]))
			return (false);
	return (true);
}

void printBefore(char **av)
{
	std::cout << "Before:\t";
	for (int i = 0; av[i]; i++)
		std::cout << av[i] << " ";
	std::cout << std::endl;
}

int	main(int ac, char **av)
{
	std::list<int>	list;
	std::deque<int>	deque;
	double			listTime;
	double			dequeTime;
	
	try
	{
		if (!isValidInput(av) || ac == 1)
			throw std::runtime_error("Error");
		++av;
		printBefore(av);
		sortList(list, av, listTime);
		sortDeque(deque, av, dequeTime);
		printListAfter(list);
		// printDequeAfter(deque);
		std::cout << "Time to process a range of " << list.size() << " elements with std::list  : " << listTime << " ms" << std::endl;
		std::cout << "Time to process a range of " << deque.size() << " elements with std::deque : " << dequeTime << " ms" << std::endl;
	}
	catch (std::runtime_error &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
}
