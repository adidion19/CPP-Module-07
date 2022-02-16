/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:19:28 by adidion           #+#    #+#             */
/*   Updated: 2022/02/16 15:26:42 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}

//class Awesome
//{
//	public:
//		Awesome(void) : _n(0) {}
//		Awesome( int n ) : _n( n ) {}
//		Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
//		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
//		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
//		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
//		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
//		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
//		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
//		int get_n() const { return _n; }
//	private:
//		int _n;
//};
//std::ostream & operator<<(std::ostream & o, const Awesome &a)
//{
//	o << a.get_n();
//	return o;
//}
//
//int main(void)
//{
//	Awesome a(2), b(4);
//	swap(a, b);
//	std::cout << a << " " << b << std::endl; std::cout << max(a, b) << std::endl; std::cout << min(a, b) << std::endl; return (0);
//}