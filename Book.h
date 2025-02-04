
#ifndef BOOK_H
#define BOOK_H

#include "Author.h"
#include "Section.h"

class Book
{
private:
	string title;
	Author author;
	bool isAvailable = true;

public:
	Book();
	Book(string, string);
	Book(string, Author);
	Book(string, string, string);
	~Book();
};
#endif
