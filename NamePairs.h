#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<ostream>

class NamePairs
{
public:
	NamePairs() = default;
	void ReadNames(); //Input name
	void ReadAges(); //Prompts user for age for each name
	void Sort(); //Sorts the name vector in alphabetical order and reorganizes the age vector to match.
	void Print() const; //Prints Names and ages (Name[i], age[i]
	bool operator==(const NamePairs& pairs) const;
	bool operator!=(const NamePairs& pairs) const;
	friend std::ostream& operator<<(std::ostream& output, const NamePairs& pair);
protected:
	std::vector<std::string> name;
	std::vector <double> age;
};