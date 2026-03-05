/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 10:18:17 by kbarru            #+#    #+#             */
/*   Updated: 2026/02/23 11:20:51 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <stddef.h>
# include <iostream>

template <typename T> void iter(T *arr, const size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; ++i)
		f(arr[i]);
}

template <typename T> void iter(const T *arr, const size_t size, void (*f)(const T &))
{
	for (size_t i = 0; i < size; ++i)
		f(arr[i]);
}

// Helper functions for testing
template <typename T> void printArr(T *arr, const size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		if (i == 0)
			std::cout << "[";
		std::cout << arr[i];
		if (i < size - 1)
			std::cout << ", ";
		else
	  		std::cout << "]" << std::endl;
	}
}

template <typename T> void printVar(const T &var)
{
	std::cout << var << std::endl;
}

template <typename T> void increment(T &var)
{
	++var;
}

#endif
