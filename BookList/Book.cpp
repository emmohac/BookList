#include "Book.h"

Book::Book()
{
	authorFirstName = "Unknown";
	authorLastName = "Unknown";
	bookName = "Unnamed";
	ISBN = -1;
}

void Book::setBookInfo(const string & newAuthorFirstName, const string & newAuthorLastName, const string & newBookName, int ISBN_num)
{
	authorFirstName = newAuthorFirstName;
	authorLastName = newAuthorLastName;
	bookName = newBookName;
	ISBN = ISBN_num;
}

string Book::getAuthorName() const
{
	return authorLastName + "," + authorFirstName;
}

string Book::getBookName() const
{
	return bookName;
}

int Book::getISBN() const
{
	return ISBN;
}

void Book::getBookInfo() const
{
	cout << "Book: " << bookName << endl;
	cout << "By: " << authorLastName << ", " << authorFirstName << endl;
}

Book::~Book()
{
}
