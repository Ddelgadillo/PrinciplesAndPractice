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
	for (int i = 0; i < name.size(); i++)
	{
		for (int j = 0; j < name.size() - i - 1; j++)
		{
			if (name.at(j) > name.at(j + 1))
			{
				std::string tempName = name.at(j);
				name.at(j) = name.at(j + 1);
				name.at(j + 1) = tempName;
			}
		}
	}
}

bool NamePairs::operator==(NamePairs& pairs)
{
	if (name == pairs.name && age == pairs.age)
	{
		return true;
	}

	return false;
}
