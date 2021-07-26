
#ifndef BOOK_H
#define BOOK_H

#include "Author.h"
#include "Section.h"

class Book
{
private:
	string name;
	Author author;
	Section section = Section("General");

public:
	Book();
	Book(string, string);
	Book(string, Author);
	Book(string, string, string);
	//void getName();
	~Book();
};
#endif
