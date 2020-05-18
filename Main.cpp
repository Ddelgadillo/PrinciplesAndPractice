#include<iostream>
#include "NamePairs.h"
#include "Book.h"

int main()
{
	Book theStand("3-5-6-X", "The Stand", "Stephen King", Book::Fiction, 1992);

	std::cout << theStand;
}