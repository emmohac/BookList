#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <iostream>
#include <string>
#include "Book.h"
#include <iomanip>

using namespace std;

class Node
{
public:
	Node() : next(nullptr) {}
	Node(const Book &newbook, Node *nextLink)
		: book(newbook), next(nextLink) {}
	Node *getNext() const { return next; }
	Book getBook() const { return book; }
	void setBook(const Book &newbook) { book = newbook; }
	void setNext(Node *nextLink) { next = nextLink; }

	~Node() {}
private:
	Book book;
	Node *next;
};

class BookList
{
public:
	BookList();
	void insertBook(const Book &aBook);
	bool searchISBN(const string &ISBN_num) const;
	void searchAuthorName(const string &fname, const string &lname) const;
	void setBookRead(const string &isbn); //FUNCTION FAILED
	void print() const;
	void printBook(const string &ISBN_num) const;
	void destroyList();
	~BookList();

private:
	bool checkBookStatus(const string &isbn) const;

	Node *first;	// pointer to the first node on the list
	Node *last;		// pointer to the last node on the list
	int count;		// number of nodes in the list
};

#endif

