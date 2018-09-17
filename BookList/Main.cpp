#include "Book.h"
#include "BookList.h"
#include "InputHandler.h"

#include <iostream>
#include <string>

using namespace std;

void displayMenu();
void processChoice(BookList &booklist);

int main()
{
	BookList aBookList;

	readBookShelf(aBookList);
	displayMenu();
	processChoice(aBookList);

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
	cout << "    3. Print book using author name" << endl;
	cout << "    4. Set book as read" << endl;
	cout << "    5: Exit" << endl;
}

void processChoice(BookList &booklist)
{
	int choice = 0;
	cout << "Enter your choice: ";
	cin >> choice;

	while (choice != 5)
	{
		string isbn;
		string lname, fname;

		switch (choice)
		{
		case 1:
			cout << endl;
			booklist.print();
			break;
		case 2:
			cout << "Enter ISBN: ";
			cin >> isbn;
			cout << endl;
			
			if (booklist.searchISBN(isbn))
				booklist.printBook(isbn);				
			cin.clear();
			cin.ignore(999, '\n');
			break;
		case 3:
			cout << "Enter author first name: ";
			cin >> fname;
			cout << "Enter author last name: ";
			cin >> lname;
			cout << endl;

			booklist.searchAuthorName(fname, lname);
			cin.clear();
			cin.ignore(999, '\n');
			break;
		case 4:
			cout << "Enter ISBN: ";
			cin >> isbn;
			booklist.setBookRead(isbn);
			break;
		default:
			cout << "    Not a good choice." << endl;
			break;
		}

		cout << endl;
		system("pause");
		displayMenu();
		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == 5)
			cout << "Thank you." << endl;
	}
}