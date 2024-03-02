#include "iter.h"
#include <iostream>
# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define BLU "\e[0;34m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define WHT "\e[0;37m"
# define CRESET "\e[0m"
# define OPEN(x) std::cout << GRN << "---------------" << x << "----------------" << CRESET << std::endl
# define CLOSE std::cout << RED << "------------------------------------------------" << CRESET << std::endl

int	main(void)
{
	int			a[3] = {1, 2, 3};
	double		b[4] = {1.3, 19.2, 13.8, 12.3};
	std::string	c[5] = {"Bonjoru", "Salut", "Les" , "amis", "Cheese"};

	OPEN("Array a of type int");
	std::cout << "size is  : " << sizeof a / sizeof a[0] << std::endl;
	iter(a, sizeof a / sizeof a[0], print);
	CLOSE;
	OPEN("Array b of type double");
	std::cout << "size is  : " << sizeof b / sizeof b[0] << std::endl;
	iter(b, sizeof b / sizeof b[0], print);
	CLOSE;
	OPEN("Array c of type std::string");
	std::cout << "size is  : " << sizeof c / sizeof c[0] << std::endl;
	iter(c, sizeof c / sizeof c[0], print);
	CLOSE;
	return (0);
}
