
#include <iostream>
#include <string>

#include "Author.h"
#include "Book.h"

Author::Author()
{
	name = "uknown";
}

Author::Author(string n)
{
	name = n;
}

Author::Author(string n, string b)
{
	name = n;
	Book book = Book(b, Author(n));
	books.push_back(book);
}

Author::~Author()
{
}
