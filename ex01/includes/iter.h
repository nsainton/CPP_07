#ifndef __ITER_H__
# define __ITER_H__
# include <cstddef>
# include <iostream>

template <typename T>
void	print(T & t)
{
	std::cout << t << std::endl;
}

template <typename T>
void	iter(T * array, const size_t size, void f(T&))
{
	size_t	i(0);

	while (i < size)
	{
		f(*(array + i));
		++i;
	}
}

#endif
