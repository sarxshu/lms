
#include "Section.cpp"
#include "Author.cpp"

#include <iostream>
#include <string>

Book::Book()
{
	title = "";
	author = Author("");
}

Book::Book(string t, string a)
{
	title = t;
	author = Author(a);
}

Book::Book(string t, Author a)
{
	title = t;
	author = a;
}

Book::Book(string t, string a, string s)
{
	title = t;
	author = Author(a, title);
	// section = Section(s);
}

Book::~Book()
{
}


