/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:13:38 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/21 20:13:39 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template < class T >
class Array
{

public:
	Array ( void );
	Array ( unsigned int n );
	~Array ( void );
	Array( Array<T> const & src );

	Array<T> & operator=( Array<T> const & rhs);
	T &	operator[]( int i );

	int	size( void ) const;
	T*	getEl( void ) const;

private:
	T*	_array;
	int	_len;

};

template <class T>
Array<T>::Array() : _array(new T[0]), _len(0)
{
}
template <class T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _len(n)
{
}
template <class T>
Array<T>::~Array()
{
}
template <class T>
Array<T>::Array( Array<T> const & src )
{
	*src = this;
}

template <class T>
Array<T> & Array<T>::operator=( Array<T> const & rhs)
{
	if (_array)
	{
		delete[] _array;
	}
	_len = rhs.len;
	_array = new T[_len];
	for (int i = 0; i < _len; i++)
	{
		_array[i] = rhs._array[i];
	}
	return *this;
}
template <class T>
T &	Array<T>::operator[]( int i )
{
	if (i >= 0 && i < size())
	{
		return getEl()[i];
	}
	else
	{
		throw std::exception();
	}

}
template <class T>
int	Array<T>::size( void ) const
{
	return _len;
}

template <class T>
T*	Array<T>::getEl( void ) const
{
	return _array;
}

#endif

/*

• Construction by copy and assignment operator. In both cases, modifying either the
original array or its copy after copying musn’t affect the other array.
• You MUST use the operator new[] to allocate memory. Preventive allocation (allocating memory in advance) is forbidden. Your program must never access nonallocated memory.
• Elements can be accessed through the subscript operator: [ ].
• When accessing an element with the [ ] operator, if its index is out of bounds, an
std::exception is thrown.
• A member function size() that returns the number of elements in the array. This
member function takes no parameter and musn’t modify the current instance.
*/