#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

using namespace std;

class Book
{
public:
	Book();
	void setBookInfo(const string &authorFirstName, const string &authorLastName, const string &bookName, int ISBN_num);
	string getAuthorName() const;
	string getBookName() const;
	int getISBN() const;
	void getBookInfo() const;
	~Book();
private:
	string bookName;
	string authorFirstName;
	string authorLastName;
	int ISBN;
};
#endif // !BOOK_H

