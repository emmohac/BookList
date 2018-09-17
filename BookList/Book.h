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
	void setBookInfo(const string &authorFirstName, const string &authorLastName, const string &status, const string &bookName, string ISBN_num);
	void setRead();
	string getAuthorName() const;
	string getBookName() const;
	string getAuthorFirstName() const;
	string getAuthorLastName() const;
	string getISBN() const;
	string getStatus() const;
	void getBookInfo() const;
	void getBookInforWithISBN() const;
	~Book();
private:
	string bookName;
	string authorFirstName;
	string authorLastName;
	string status;
	string ISBN;
};
#endif // !BOOK_H

