#include "NamePairs.h"

void NamePairs::ReadNames()
{
	char ans;
	std::string tempName;

	do
	{
		std::cout << "Please enter name: ";
		std::getline(std::cin, tempName);

		name.push_back(tempName);

		std::cout << "Add another(Y or N)? ";
		std::cin >> ans;
		std::cin.ignore();

	} while (ans == 'y' or ans == 'Y');

	std::cout << std::endl;
}

void NamePairs::ReadAges()
{
	double tempAge;

	for (std::string name : name)
	{
		std::cout << "Enter age for " << name << ": ";
		std::cin >> tempAge;
		std::cin.ignore();

		age.push_back(tempAge);
	}

	std::cout << std::endl;
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

				double tempAge = age.at(j);
				age.at(j) = age.at(j + 1);
				age.at(j + 1) = tempAge;
			}
		}
	}
}

bool NamePairs::operator==(const NamePairs& pairs) const
{
	if (name == pairs.name && age == pairs.age)
	{
		return true;
	}

	return false;
}

bool NamePairs::operator!=(const NamePairs& pairs) const
{
	return (!((*this) == pairs));
}
