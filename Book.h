#pragma once
#include<iostream>

class Book
{
public:
	Book() = default;
	std::string GetISBN() const;
	std::string GetTitle() const;
	std::string GetAuthor() const;
	int GetCopyrightDate() const;
	bool GetCheckedOut() const;
private:
	std::string ISBN;
	std::string title;
	std::string author;
	int copyrightDate;
	bool checkedOut = false;
};