#include "BookList.h"

BookList::BookList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}

void BookList::insertBook(const Book &aBook)
{
	if (count == 0)
	{
		first = new Node(aBook, nullptr);
		last = first;
	}
	else
	{
		last->setNext(new Node(aBook, nullptr));
		last = last->getNext();
	}

	++count;
}

bool BookList::search(const string &ISBN_num) const
{
	if (first == nullptr)
	{
		cerr << "Bookshelf is empty.";
		return false;
	}
	else
	{
		bool found = false;
		Node *current = first;

		while (current != nullptr && !found)
		{
			if (current->getBook().getISBN() == ISBN_num)
				return true;
			else
				current = current->getNext();
		}

		//if (!found)
		//{
		//	cerr << "Book is not the shelf." << endl;
		//	return false;
		//}
	}
}

void BookList::print() const
{
	Node *current = first;

	if (current == nullptr)
		cout << "Bookshelf is empty." << endl;
	else
	{
		while (current != nullptr)
		{
			current->getBook().getBookInfo();
			current = current->getNext();
		}		
	}
}

void BookList::printBook(const string &ISBN_num) const
{
	if (first == nullptr)
		cerr << "Bookshelf is empty.";
	else
	{
		bool found = false;
		Node *current = first;

		while (current != nullptr && !found)
		{
			if (current->getBook().getISBN() == ISBN_num)
			{
				found = true;
				current->getBook().getBookInfo();
			}
			else
				current = current->getNext();
		}

		if (!found)
			cerr << "Book is not the shelf." << endl;		
	}
}

void BookList::destroyList()
{
	Node *current = first;

	while (first != nullptr)
	{
		first = first->getNext();
		delete current;
		current = first;
	}

	first = nullptr;
	last = nullptr;
	count = 0;
}

BookList::~BookList()
{
	destroyList();
}
