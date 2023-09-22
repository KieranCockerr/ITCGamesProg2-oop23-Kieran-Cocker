#include <iostream>

// functions
int sumSquares(int* t_arrayB, int t_arraySize); // Remember: Arrays must be referenced as a pointer

int main()
{
	int arrayB[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // new array with 10 elements
	int arraySize = sizeof(arrayB); // Creating a new variable for the size of the array

	sumSquares(arrayB, arraySize); // call new function

}

int sumSquares(int* t_arrayB, int t_arraySize) // The function, make sure to call arrays as a pointer
{
	int sum = 0; // int for the sum of elements
	int squam = 0; // Test variable to see if the elements are squaring correctly

	for ( int i = 0; i < 10; i++) /// For loop to go through the elements of the array
	{
		squam = t_arrayB[i] * t_arrayB[i]; // test variable
		sum = sum + t_arrayB[i] * t_arrayB[i]; // getting the sum of the squared elements
	}

	std::cout << "The sum of the squared array of elements is " << sum << "\n"; // printing the sum of the squared elements
	std::cout << "The size of the array is " << t_arraySize << "\n"; // Printing the size of the array

	return sum; // returning the value of sum to main note: Need to remember how to allow a variable to catch the returning variable
}