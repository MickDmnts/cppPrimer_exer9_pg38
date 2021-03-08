#include <iostream>

int main()
{
	//Speculation: 32
	//Speculation: 42....295
	unsigned u = 10 , u2 = 42;
	std::cout << u2 - u << std::endl; //Answer: 32
	std::cout << u - u2 << std::endl; //Answer: 4294967264

	//Speculation: 32
	//Speculation: -32
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl; //Answer: 32
	std::cout << i - i2 << std::endl; //Answer: -32

	//Speculation: 0
	//Speculation: 0
	std::cout << i - u << std::endl; //Answer: 0
	std::cout << u - i << std::endl; //Answer: 0

	return 0;
}