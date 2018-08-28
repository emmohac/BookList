#include "Book.h"
#include "BookList.h"

#include <iostream>
#include <string>

using namespace std;

void displayMenu();

int main()
{
	BookList aBookList;

	cout << endl;
	system("pause");
	return 0;
}

void displayMenu()
{
	cout << "\n*** MAIN MENU ***\n";
	cout << "\nSelect one of the following:\n\n";
	cout << "    1: Print all books" << endl;
	cout << "    2: Print a book using ISBN" << endl;
	cout << "    3: Exit" << endl;
}