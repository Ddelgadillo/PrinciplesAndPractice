#include "Patron.h"

Patron::Patron(std::string name, std::string libraryNumber, float fees) :
	mName(name),
	mLibraryNumber(libraryNumber),
	mFees(fees)
{}

std::string Patron::GetName() const
{
	return mName;
}

std::string Patron::GetLibraryNumber() const
{
	return mLibraryNumber;
}

float Patron::GetFees() const
{
	return mFees;
}

bool Patron::HaveFees() const
{
	if (mFees > 0.0f)
	{
		return true;
	}

	return false;
}
