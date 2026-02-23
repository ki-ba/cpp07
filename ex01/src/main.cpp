/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 10:18:18 by kbarru            #+#    #+#             */
/*   Updated: 2026/02/23 11:39:13 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

#define ARR_SIZE 10
void addOne(int *n)
{
	static int i = 0;
	*n = i++;
}

void constAddOne(const int *n)
{
	std::cout << "constAddOne called on " << *n << std::endl;
}

int main(void)
{
	int arr[ARR_SIZE] = {0};
	int const const_arr[ARR_SIZE] = {0};
	printArr(arr, ARR_SIZE);
	iter(arr, ARR_SIZE, addOne);
	printArr(arr, ARR_SIZE);

	// CONST ARRAY

	printArr(const_arr, ARR_SIZE);
	iter(const_arr, ARR_SIZE, constAddOne);
	printArr(const_arr, ARR_SIZE);
}
