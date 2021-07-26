
#ifndef SECTION_H
#define SECTION_H

#include "Author.h"
#include "Section.h"

#include <string>
#include <vector>

class Section
{
private:
	string name;
	vector<Book> books;

public:
	Section(string);
	Section(string, Book);
	~Section();
};

#endif
