/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:18:56 by adidion           #+#    #+#             */
/*   Updated: 2022/02/16 15:15:05 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <iostream>

template<typename T>
T	const &max(T const &x, T const &y)
{
	return (x>=y ? x : y);
}

template<typename T>
T	const &min(T const &x, T const &y)
{
	return (x<=y ? x : y);
}

template<typename T>
void swap(T &x, T &y)
{
	T i;
	i = x;
	x = y;
	y = i;
}

#endif