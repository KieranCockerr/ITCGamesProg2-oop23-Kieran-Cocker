#include <iostream>

int main()
{
	
	int arrayA[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // Creating a new array with the specified elements
	int arrayAptr = *arrayA; // Creating a variable that is the pointer of the array

	std::cout << "The memory location of the array is " << arrayA << "\n"; // Print the location of arrayA in memory
	std::cout << "The size of the array is " << sizeof(arrayA) << "\n"; // Print the size of the array in memory

	// range loop
	for (int &value : arrayA)
	{ 
		value++; // Add +1 to each element of the array
		std::cout << value << "\n"; // Display all the elements of the array
	}

}