#include"Section.h"

#include<string>

Section::Section(string n)
{
    name = n;
}

Section::Section(string n, Book b)
{
    name = n;
    books.push_back(b);
}

Section::~Section()
{
}
