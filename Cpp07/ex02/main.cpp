#include <iostream>
#include "Array.hpp"
#include <time.h>
#include <stdlib.h>

int main()
{
	try{
		Array<int> a(2);
		for (unsigned int n = 0; n < a.size(); n++)
			a[n] = n + 1;

		for (unsigned int n = 0; n < a.size(); n++)
			std::cout << "a[n]= " << a[n] << std::endl;

		std::cout << std::endl << std::endl;
		Array<int> b(a);

		b[1] = 7;
		for (unsigned int n = 0; n < b.size(); n++){
			std::cout << "b[n]= " << b[n] << std::endl;
		}
		a = b;
		
		for (unsigned int n = 0; n < a.size(); n++){
			std::cout << "b=" << b[n] << std::endl;
		}

		for (unsigned int n = 0; n < a.size(); n++)
			std::cout << "a=" << a[n] << " ";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}