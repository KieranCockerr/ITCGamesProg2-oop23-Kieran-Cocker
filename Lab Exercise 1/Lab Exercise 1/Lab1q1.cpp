#include <iostream>

int main()
{
	
	int arrayA[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // Creating a new array with the specified elements
	int arrayAptr = *arrayA; // Creating a variable that is the pointer of the array

	std::cout << "The memory location of the array is " << arrayA << "\n";
}