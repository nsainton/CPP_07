#include "Array.h"
#include <iostream>
#include <exception>

template <typename T>
Array<T>::Array(){
	std::clog << "Array Default Constructor Called" << std::endl;
	elements = NULL;
}

template <typename T>
Array<T>::Array( const unsigned int n ) : size(n){
	std::clog << "Array Integer Constructor Called" << std::endl;
	if (! size)
		elements = NULL;
	else
		elements = new T[n];
}

template <typename T>
Array<T>::Array( const Array & other ) : size(other.size){
	std::clog << "Array Copy Constructor Called" << std::endl;
	this->elements = new T[other.size];
}

template <typename T>
Array<T>&	Array<T>::operator=( const Array<T> & other ){
	std::clog << "Array Copy Assignment Operator Called" << std::endl;
	unsigned int	i(0);

	if (*this == other)
		return (*this);
	if (this->elements != NULL)
		delete[] this->elements;
	if (! other.size)
		return (*this);
	this->elements = new T[other.size];
	this->size = other.size;
	while (i < other.size)
	{
		*(this->elements + i) = *(other.elements + i);
		++i;
	}
	return (*this);
}

template <typename T>
Array<T>::~Array(){
	std::clog << "Array Destructor Called" << std::endl;
}
