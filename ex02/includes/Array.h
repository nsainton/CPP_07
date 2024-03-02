#ifndef __ARRAY_H__
# define __ARRAY_H__

template <typename T>
class	Array{
	unsigned int	_size;
	T*				_elements;

	public:
		Array();
		Array( const unsigned int n );
		Array( const Array & );
		Array& operator=( const Array & );
		T&		operator[]( const unsigned int & );
		virtual ~Array();
		const unsigned int	& size();
};

# include "Array.tpp"
#endif
