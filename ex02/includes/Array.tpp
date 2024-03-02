#include "Array.h"
#include <iostream>
#include <exception>

template <typename T>
Array::Array(){
	std::clog << "Array Default Constructor Called" << std::endl;
}

template <typename T>
Array::Array( const Array & other ){
	std::clog << "Array Copy Constructor Called" << std::endl;
	(void)other;
}

template <typename T>
Array&	Array::operator=( const Array & other ){
	std::clog << "Array Copy Assignment Operator Called" << std::endl;
	(void)other;
	return (*this);
}

template <typename T>
Array::~Array(){
	std::clog << "Array Destructor Called" << std::endl;
}
