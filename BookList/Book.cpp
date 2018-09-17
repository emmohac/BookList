#include "Book.h"
#include <iomanip>

Book::Book()
{
	authorFirstName = "Unknown";
	authorLastName = "Unknown";
	bookName = "Unnamed";
	ISBN = "-1";
	status = "Unknown";
}

void Book::setBookInfo(const string & newAuthorFirstName, const string & newAuthorLastName, const string &newStatus, const string & newBookName, string ISBN_num)
{
	authorFirstName = newAuthorFirstName;
	authorLastName = newAuthorLastName;
	bookName = newBookName;
	ISBN = ISBN_num;
	status = newStatus;
}

void Book::setRead()
{
	status = "read";
}

string Book::getAuthorName() const
{
	return authorLastName + "," + authorFirstName;
}

string Book::getBookName() const
{
	return bookName;
}

string Book::getAuthorFirstName() const
{
	return authorFirstName;
}

string Book::getAuthorLastName() const
{
	return authorLastName;
}

string Book::getISBN() const
{
	return ISBN;
}

string Book::getStatus() const
{
	return status;
}

void Book::getBookInfo() const
{
	cout << "Book title:  " << setw(10) << bookName << endl;
	cout << "Author name:  " << setw(2) << authorFirstName << " " << authorLastName << endl;
}

void Book::getBookInforWithISBN() const
{
	cout << "Book title: " << setw(10) << bookName << endl;
	cout << "Author name: " << setw(2) << authorFirstName << " " << authorLastName << endl;
	cout << "ISBN: " << setw(20) << ISBN << endl;
}

Book::~Book()
{
}
