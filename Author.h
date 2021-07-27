
#ifndef AUTHOR_H
#define AUTHOR_H

#include "Book.h"

#include <string>
#include <array>
#include <vector>

using namespace std;

class Author
{
private:
	string name;
	// vector<Book> books;

public:
	Author();
	Author(string);
	Author(string, string);
	~Author();
};

#endif
