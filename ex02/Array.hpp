/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:41:56 by adidion           #+#    #+#             */
/*   Updated: 2022/02/12 14:20:44 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template<typename T>
class Array
{
	public:
		Array()
		{
			_i = 0;
			_t = new T[1];
			_t[0] = 0;
		}
		Array(unsigned int i)
		{
			_i = i;
			_t = new T[i];
		}
		Array(Array const &obj)
		{
			_i = obj.getI();
			T *obj_t = obj.getT();
			_t = new T[_i];
			for (unsigned int i = 0; i < _i; i++)
			{
				_t[i] = obj_t[i];
			}
		}
		Array &operator=(Array const &obj)
		{
			_i = obj.getI();
			T	*obj_t = obj.getT();
			delete [] _t;
			_t = new T[_i];
			for (unsigned int i = 0; i < _i; i++)
				_t[i] = obj_t[i];
			return (*this);
		}
		T &operator[](int i)
		{
			if (i < 0 || i > static_cast<int>(_i))
				throw (std::exception());
			else
				return (*(_t + i));
		}
		unsigned int getI() const
		{
			return (_i);
		}
		T	*getT(void) const
		{
			return (_t);
		}
		~Array()
		{
			delete [] _t;
		}
	private:
		unsigned int _i;
		T	*_t;
};

template<typename T>
std::ostream & operator<<(std::ostream & ope, Array< T > const & obj)
{
	for (unsigned int i = 0; i < obj.getI(); i++)
		std::cout << "Array.T[" << i << "] = " << (obj.getT())[i] << std::endl;
	return (ope);
}

#endif