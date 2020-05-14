#include "Book.h"

Book::Book(std::string isbn, std::string title, std::string author, int copyrightDate) :
	mISBN(isbn), 
	mTitle(title),
	mAuthor(author), 
	mCopyrightDate(copyrightDate)
{
	for (int i = 0; i < mISBN.size() - 1; i += 2)
	{
		if (!isdigit(mISBN.at(i)))
		{
			std::cout << "EROR! Invalid ISBN!" << std::endl;
		}
	}

	for (int i = 1; i < mISBN.size(); i += 2)
	{
		if (mISBN.at(i) != '-')
		{
			std::cout << "EROR! Invalid ISBN!" << std::endl;
		}
	}

	bool test = isdigit(mISBN.at(mISBN.size() - 1));
	bool test2 = isalpha(mISBN.at(mISBN.size() - 1));

	if (!isdigit(mISBN.at(mISBN.size() - 1)) && !isalpha(mISBN.at(mISBN.size() - 1)))
	{
		std::cout << "EROR! Invalid ISBN!" << std::endl;
	}
}

std::string Book::GetISBN() const
{
	return mISBN;
}

std::string Book::GetTitle() const
{
	return mTitle;
}

std::string Book::GetAuthor() const
{
	return mAuthor;
}

int Book::GetCopyrightDate() const
{
	return mCopyrightDate;
}

bool Book::GetCheckedOut() const
{
	return checkedOut;
}

void Book::SetCheckout(bool checkout)
{
	checkedOut = checkout;
}

bool Book::operator==(const Book& book) const
{
	return mISBN == book.mISBN;
}

bool Book::operator!=(const Book& book) const
{
	return mISBN != book.mISBN;
}

std::ostream& operator<<(std::ostream& output, const Book& book)
{
	output << "Title: " << book.mTitle << "\nAuthor: " << book.mAuthor << "\nISBN: " << book.mISBN << "\nCopyright: " << book.mCopyrightDate << std::endl;

	return output;
}
