#include "NamePairs.h"
#include<iostream>

int main()
{
	NamePairs one;
	NamePairs two;

	one.ReadNames();
	one.ReadAges();
	one.Sort();
	//one.Print();

	std::cout << one;
}