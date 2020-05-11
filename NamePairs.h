#pragma once
#include<iostream>
#include<vector>

class NamePairs
{
public:
	void ReadNames(); //Input name
	void ReadAges(); //Prompts user for age for each name
	void Print(); //Prints Names and ages (Name[i], age[i]
	void Sort(); //Sorts the name vector in alphabetical order and reorganizes the age vector to match.
	bool operator==(NamePairs& pairs);
private:
	std::vector<std::string> name;
	std::vector <double> age;
};