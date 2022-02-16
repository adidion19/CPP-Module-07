/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:46:20 by adidion           #+#    #+#             */
/*   Updated: 2022/02/16 15:29:49 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>

template<typename T>
void	display(T const & tab)
{
	std::cout << tab << std::endl;
}

template<typename T>
void iter(T *tab, int size, void(*f)(T const &tab))
{
	int i = -1;
	while (++i < size)
	{
		f(tab[i]);
	}
}

#endif