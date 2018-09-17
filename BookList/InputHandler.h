#include "Book.h"
#include "BookList.h"

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

void createBookShelf(ifstream &infile, BookList &booklist)
{
	string fname, lname, bookName, isbn, status;
	
	while (!infile.eof())
	{
		infile >> isbn;
		infile >> status;
		infile >> fname;
		infile >> lname;
		infile >> bookName;

		Book aBook;		
		aBook.setBookInfo(fname, lname, status, bookName, isbn);

		booklist.insertBook(aBook);
	}
}
void readBookShelf(BookList &booklist)
{
	ifstream infile;

	infile.open("bookshelf.txt");

	if (!infile)
		cerr << "Input file does not exist." << endl;

	createBookShelf(infile, booklist);
	infile.close();
}