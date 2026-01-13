#include <iostream>
#include "Array.hpp"
#include <time.h>
#include <stdlib.h>

#define MAX_VAL 750
int main(int, char**)
{
	// const Array<int> a(2);
	
	// const Array<int> b(a);
	// b[1] = 42;
	// try{
	// 	std::cout << b[1];

	// }
	// catch(...){std::cout << "FAIL";};

	//Array<Le type par lequel tu remplaces 'T' dans ta classe> c(a);

	Array<int> a(42);
	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = i;
	
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";

	std::cout << std::endl << std::endl;
	Array<int> b(a);

	b[2] = 42;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl << std::endl;
	a = b;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << "b=" << b[i] << " ";
	std::cout << std::endl;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << "a=" << a[i] << " ";
    // Array<int> numbers(MAX_VAL);
    // int* mirror = new int[MAX_VAL];
    // srand(time(NULL));
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     const int value = rand();
    //     numbers[i] = value;
    //     mirror[i] = value;
    // }
    // //SCOPE
    // {
    //     Array<int> tmp = numbers;
    //     Array<int> test(tmp);
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     if (mirror[i] != numbers[i])
    //     {
    //         std::cerr << "didn't save the same value!!" << std::endl;
    //         return 1;
    //     }
    // }
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    // }
    // delete [] mirror;//
    return 0;
}