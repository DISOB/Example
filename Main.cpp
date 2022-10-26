#include "Sort.h"
#include <iostream>
#include <cstdlib>


int main()
{
	int array[10];
	srand(5);

	for (int &nums: array)
	{
		nums = 1 + rand() % 10;
		std::cout << nums << " ";
	}

	std::cout << std::endl;

	int *new_array = sorted(array, 10);

	for (int i = 0; i < 10; i++)
	{
		std::cout << array[i] << " ";
	}

	return 0;
}
