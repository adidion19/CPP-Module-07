/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:47:55 by adidion           #+#    #+#             */
/*   Updated: 2022/02/16 15:33:10 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::string s[5] = {"coucou", "toto", "titi", "tutu", "bye"};
	char c[5] = "xyab";
	int i[5] = {1, 8, 42, -78878, 454787};
	double d[5] = {897.12, 7895.36, -7889.0, 0.0, 879898789.3};
	int size = 5;
	iter(s, size, display);
	std::cout << "---------------------" << std::endl;
	iter(c, size, display);
	std::cout << "---------------------" << std::endl;
	iter(i, size, display);
	std::cout << "---------------------" << std::endl;
	iter(d, size, display);
}

//class Awesome
//{
//	public:
//		Awesome( void ) : _n( 42 )
//		{
//			return;
//		}
//		int get( void ) const
//		{
//			return this->_n;
//		}
//		private:
//			int _n;
//};
//
//std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
//{
//	o << rhs.get();
//	return o;
//}
//
//template< typename T >
//void print( T const & x )
//{
//	std::cout << x << std::endl;
//	return;
//}
//
//int main()
//{
//	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//	Awesome tab2[5];
//	iter( tab, 5, print ); iter( tab2, 5, print );
//	return 0;
//}