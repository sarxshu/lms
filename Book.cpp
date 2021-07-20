#include<iostream>
#include<string>
#include "Section.cpp" 
#include "Author.cpp"

class Book
{
private:
    string name;
    Author author;
    Section section;
public:
    Book();
    Book(string);
    ~Book();
};

Book::Book(string n)
{
    name = n;
}

Book::~Book()
{
}
