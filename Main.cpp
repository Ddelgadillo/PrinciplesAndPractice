#include "NamePairs.h"

int main()
{
	NamePairs one;
	NamePairs two;

	one.ReadNames();
	one.ReadAges();

	two.ReadNames();
	two.ReadAges();

	if (one == two)
	{
		std::cout << "True!";
	}
	else
	{
		std::cout << "False!";
	}
}