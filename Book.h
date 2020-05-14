#pragma once
#include<iostream>

class Book
{
public:
	Book() = default;
	Book(std::string isbn, std::string title, std::string author, int copyrightDate);
	std::string GetISBN() const;
	std::string GetTitle() const;
	std::string GetAuthor() const;
	int GetCopyrightDate() const;
	bool GetCheckedOut() const;
	void SetCheckout(bool checkout);
	bool operator==(const Book& book) const;
	bool operator!= (const Book & book) const;
	friend std::ostream& operator<<(std::ostream& output, const Book& book);
protected:
	std::string mISBN;
	std::string mTitle;
	std::string mAuthor;
	int mCopyrightDate;
	bool checkedOut = false;
};