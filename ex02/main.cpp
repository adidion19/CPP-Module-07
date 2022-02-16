/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:22:14 by adidion           #+#    #+#             */
/*   Updated: 2022/02/12 15:07:54 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	{
		std::cout << "test exceptions" << std::endl << "-----------------" << std::endl;
		Array<int>	a;
		try
		{
			std::cout << "index 0:" << std::endl << a[0] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl << std::endl;
		}
		try
		{
			std::cout << "index 4:" << std::endl << a[4] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << a << std::endl;
	}
	{
		std::cout << std::endl << "T = int" << std::endl << "----------------" << std::endl;
		Array<int> a(4);
		std::cout << "construction: \n" << a << std::endl;
		a[0] = 45645;
		a[1] = 42;
		a[2] = 0;
		a[3] = -45456456;
		std::cout << "tab filled: \n" << a << std::endl;
	}
	{
		std::cout << std::endl << "T = double" << std::endl << "----------------" << std::endl;
		Array<double> a(4);
		std::cout << "construction: \n" << a << std::endl;
		a[0] = 45645.6;
		a[1] = 42.0;
		a[2] = 0.8978;
		a[3] = -45456456.9878;
		std::cout << "tab filled: \n" << a << std::endl;
	}
	{
		std::cout << std::endl << "T = std::string" << std::endl << "----------------" << std::endl;
		Array<std::string> a(4);
		std::cout << "construction: \n" << a << std::endl;
		a[0] = "one";
		a[1] = "two";
		a[2] = "three";
		a[3] = "four";
		std::cout << "tab filled: \n" << a << std::endl;
	}
	{
		std::cout << std::endl << "T = char" << std::endl << "----------------" << std::endl;
		Array<char> a(4);
		std::cout << "construction: \n" << a << std::endl;
		a[0] = 'a';
		a[1] = 'b';
		a[2] = 'c';
		std::cout << "tab filled: \n" << a << std::endl;
	}
}