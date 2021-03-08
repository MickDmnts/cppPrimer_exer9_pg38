#include <iostream>

int main()
{
	//Speculation: 32
	//Speculation: 42....295
	unsigned u = 10 , u2 = 42;
	std::cout << u2 - u << std::endl; 
	std::cout << u - u2 << std::endl; 

	//Speculation: 32
	//Speculation: -32
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl; 
	std::cout << i - i2 << std::endl; 

	//Speculation: 0
	//Speculation: 0
	std::cout << i - u << std::endl; 
	std::cout << u - i << std::endl; 

	return 0;
}