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
	cout << "    3: Exit" << endl;
}

void processChoice(BookList &booklist)
{
	int choice = 0;
	cout << "Enter your choice: ";
	cin >> choice;

	while (choice != 3)
	{
		int isbn = 0;

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

			if (booklist.search(isbn))
			{
				booklist.printBook(isbn);
				cout << endl;
			}
		default:
			cout << "Not a good choice." << endl;
			break;
		}

		cout << endl;
		system("pause");
		displayMenu();
		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == 3)
			cout << "Thank you." << endl;
	}
}