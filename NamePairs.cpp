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
		std::cout << "\n";

	} while (ans == 'y' or ans == 'Y');
}

void NamePairs::ReadAges()
{
	double tempAge;

	for (std::string name : name)
	{
		std::cout << "Enter age for " << name << ": ";
		std::cin >> tempAge;

		age.push_back(tempAge);
	}
}

void NamePairs::Print()
{
	std::cout << "\n";

	for (int i = 0; i < name.size(); i++)
	{
		std::cout << name.at(i) << ", " << age.at(i) << std::endl;
	}
}

void NamePairs::Sort()
{
}
