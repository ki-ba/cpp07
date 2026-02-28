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

int main(void)
{
	int arr[ARR_SIZE] = {0};
	int const const_arr[ARR_SIZE] = {0};


	std::cout << std::endl << "NON CONST ARRAY, NON CONST FUNCTION" << std::endl;

	printArr(arr, ARR_SIZE);
	iter(arr, ARR_SIZE, increment<int>);
	printArr(arr, ARR_SIZE);

	std::cout << std::endl << "NON CONST ARRAY, CONST FUNCTION" << std::endl;
	printArr(arr, ARR_SIZE);
	iter(arr, ARR_SIZE, printVar<int>);
	printArr(arr, ARR_SIZE);

	std::cout << std::endl << "CONST ARRAY, CONST FUNCTION" << std::endl;
	printArr(const_arr, ARR_SIZE);
	iter(const_arr, ARR_SIZE, printVar<int>);
	printArr(const_arr, ARR_SIZE);

}
