#include "Book.h"
#include "BookList.h"

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

void createBookShelf(ifstream &infile, BookList &booklist) //NEED TO FIX HERE
{
	string fname, lname, bookName, isbn;
	
	infile >> isbn;
	infile >> fname;
	infile >> lname;
	infile >> bookName;

	while (!infile.eof())
	{
		Book aBook;
	
		aBook.setBookInfo(fname, lname, bookName, isbn);

		booklist.insertBook(aBook);

		infile >> isbn;
		infile >> fname;
		infile >> lname;
		infile >> bookName;

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