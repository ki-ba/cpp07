/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_ops.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 09:21:01 by kbarru            #+#    #+#             */
/*   Updated: 2026/02/23 10:14:39 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBER_OPERATIONS_HPP
# define NUMBER_OPERATIONS_HPP

#include <iostream>

template <typename T> void swap(T *a, T *b)
{
	T temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

template <typename T> T min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T> T max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}

template <typename T> void test(T a, T b)
{
	std::cout << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << std::endl;
	std::cout << min(a, b) << " < " << max(a, b) << std::endl;
	std::cout << "SWAP :" << std::endl;
	swap(&a, &b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << min(a, b) << " < " << max(a, b) << std::endl;
	std::cout << "-----------------------------" << std::endl;
	
}
#endif
