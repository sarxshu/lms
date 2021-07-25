#ifndef BOOK_H
#define BOOK_H

#include"Author.h"
#include"Section.h"

class Book
{
private:
    string name;
    Author author;
    Section section;
public:
    Book();
    Book(string);
    //void getName();
    ~Book();
};
#endif