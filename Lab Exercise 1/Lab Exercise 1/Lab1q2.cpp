#include <iostream>

// functions
int sumSquares(int* t_arrayB, int t_arraySize); // Remember: Arrays must be referenced as a pointer

int main()
{
	int arrayB[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // new array with 10 elements
	int arraySize = sizeof(arrayB);

	sumSquares(arrayB, arraySize); // call new function

}

int sumSquares(int* t_arrayB, int t_arraySize) // The function, make sure to call arrays as a pointer
{
	int sum = 0;
	int squam = 0;

	for ( int i = 0; i < 10; i++)
	{
		squam = i ^ 2;
		sum = sum + squam;
	}

	return sum;
}