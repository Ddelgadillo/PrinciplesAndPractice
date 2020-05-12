#include "NamePairs.h"

int main()
{
	NamePairs one;
	NamePairs two;

	one.ReadNames();
	one.ReadAges();
	one.Sort();
	one.Print();
}