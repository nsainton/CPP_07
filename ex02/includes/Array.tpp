#include "Array.h"
#include <iostream>
#include <exception>

template <typename T>
Array<T>::Array(){
	std::clog << "Array Default Constructor Called" << std::endl;
	this->_elements = NULL;
}

template <typename T>
Array<T>::Array( const unsigned int n ) : _size(n){
	std::clog << "Array Integer Constructor Called" << std::endl;
	if (! _size)
		this->_elements = NULL;
	else
		this->_elements = new T[n];
}

template <typename T>
Array<T>::Array( const Array & other ) : _size(other._size){
	std::clog << "Array Copy Constructor Called" << std::endl;
	this->_elements = new T[other.size];
}

template <typename T>
Array<T>&	Array<T>::operator=( const Array<T> & other ){
	std::clog << "Array Copy Assignment Operator Called" << std::endl;
	unsigned int	i(0);

	if (*this == other)
		return (*this);
	if (this->_elements != NULL)
		delete[] this->_elements;
	if (! other._size)
		return (*this);
	this->_elements = new T[other._size];
	this->_size = other._size;
	while (i < other._size)
	{
		*(this->_elements + i) = *(other._elements + i);
		++i;
	}
	return (*this);
}

template <typename T>
T&		Array<T>::operator[]( const unsigned int & n ) const
{
	if (n >= this->_size)
		throw (std::exception());
	return (*(this->_elements + n));
}

template <typename T>
Array<T>::~Array(){
	std::clog << "Array Destructor Called" << std::endl;
	if (this->_elements != NULL)
		delete[] this->_elements;
}

template <typename T>
const unsigned int	& Array<T>::size() const {
	return (this->_size);
}

template <typename T>
std::ostream&	operator<<(std::ostream & os, const Array<T> & ar)
{
	unsigned int	i(0);

	os << "Printing array" << std::endl;
	os << "Array size is : " << ar.size() << std::endl;
	while (i < ar.size())
	{
		os << "ar[" << i << "]: " << ar[i] << std::endl;
		++i;
	}
	return (os);
}
