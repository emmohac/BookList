#include "Book.h"
#include "BookList.h"

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

void createBookShelf(ifstream &infile, BookList &booklist) //NEED TO FIX HERE
{
	int isbn = 0;
	string fname, lname, bookName;
	
	infile >> isbn;

	while (isbn != -999)
	{
		Book aBook;

		infile >> fname;
		infile >> lname;
		infile >> bookName;
		aBook.setBookInfo(fname, lname, bookName, isbn);

		booklist.insertBook(aBook);

		infile >> isbn;

	}
}
void readBookShelf(BookList &booklist)
{
	ifstream infile;

	infile.open("bookshelf.txt");

	if (!infile)
	{
		cerr << "Input file does not exist." << endl;
	}

	createBookShelf(infile, booklist);
	infile.close();
}