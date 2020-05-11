#include "NamePairs.h"

void NamePairs::ReadNames()
{
	char ans;
	std::string tempName;

	do
	{
		std::cout << "Please enter name: " << std::endl;
		std::cin >> tempName;

		name.push_back(tempName);

		std::cout << "Add another(Y or N)? ";
		std::cin >> ans;

	} while (ans == 'y' or ans == 'Y');
}

void NamePairs::ReadAges()
{
}

void NamePairs::Print()
{
}

void NamePairs::Sort()
{
}
