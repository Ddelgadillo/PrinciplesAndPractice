#pragma once
#include<string>

class Patron
{
private:
	std::string mName;
	std::string mLibraryNumber;
	float mFees;
public:
	Patron() = default;
	Patron(std::string name, std::string libraryNumber, float fees);
	std::string GetName() const;
	std::string GetLibraryNumber() const;
	float GetFees() const;
	bool HaveFees() const;
};