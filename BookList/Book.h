#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Book
{
public:
	Book();
	void setBookInfo(const string &authorFirstName, const string &authorLastName, const string &bookName, string ISBN_num);
	string getAuthorName() const;
	string getBookName() const;
	string getISBN() const;
	void getBookInfo() const;
	~Book();
private:
	string bookName;
	string authorFirstName;
	string authorLastName;
	string ISBN;
};
#endif // !BOOK_H

