/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 09:25:49 by kbarru            #+#    #+#             */
/*   Updated: 2026/02/23 10:14:30 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "basic_ops.hpp"

# define INT_A 3
# define INT_B 4

# define FLOAT_A 4.2f
# define FLOAT_B 19385.332f

# define STR_A "cake"
# define STR_B "apple"

# define USAGE "usage : ./basic_ops [<param1> <param2>]"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "INT TESTING" << std::endl;
        test<int>(INT_A, INT_B);
        std::cout << "FLOAT TESTING" << std::endl;
        test<float>(FLOAT_A, FLOAT_B);
        std::cout << "STR TESTING" << std::endl;
        test(STR_A, STR_B); // no type specifier here; c++ is smart
    }
    else if (argc > 3)
    {
        std::cerr << USAGE << std::endl;
        for (int i = 0; i < argc; ++i)
        {
            (void)argc;
            (void)argv;
            // test(argv[1], argv[2]);
        }
    }
}
