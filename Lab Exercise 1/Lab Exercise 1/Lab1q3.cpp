#include <iostream>

int main()
{
	enum Enemy {
		Zombie,
		Boss,
		Archer,
	};

	enum Player {
		Archer,
		Medic,
		Mage
	};

	// There will be a compiler error because you cannot have two elements with the same names on a legacy enum
	// To fix, you must make the enum an enum class, then you can have two different enums with elements of the same names.

	// eg 
	// enum class Enemy {
	// Zombie,
	// Boss,
	// Archer
	//};

	// enum class Player {
	// Archer,
	// Medic,
	// Mage
	// };

	// This will allow the code to compile
}