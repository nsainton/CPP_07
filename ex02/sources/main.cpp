#include "Array.h"
#include <iostream>

int	main(void)
{
	std::cout << "Creating empty array A" << std::endl;
	Array<int>	A;
	std::cout << "A" << A << std::endl;

	std::cout << "Creating array B with 5 elements" << std::endl;
	Array<int>	B(5);
	std::cout << "B" << B << std::endl;

	std::cout << "Creating array C from B" << std::endl;
	Array<int>	C(B);
	std::cout << "C" << C << std::endl;
	
	std::cout << "C[3] = 2" << std::endl;
	C[3] = 2;
	std::cout << "This is B " << std::endl;
	std::cout << B << std::endl;
	std::cout << "This is C " << std::endl;
	std::cout << C << std::endl;

	std::cout << "Creating array D and copying it from C" << std::endl;
	Array<int>	D;
	D = C;

	std::cout << "B[0] = 1" << std::endl;
	B[0] = 1;
	std::cout << "D[2] = 3" << std::endl;
	D[2] = 3;

	std::cout << "This is B " << std::endl;
	std::cout << B << std::endl;
	std::cout << "This is C " << std::endl;
	std::cout << C << std::endl;
	std::cout << "This is D " << std::endl;
	std::cout << D << std::endl;
}
