
#include "Section.cpp" 
#include "Author.cpp"

#include<iostream>
#include<string>

Book::Book() {
    name = "uknown";
    author = Author();
}

Book::Book(string n, string a) {
    name = n;
    author = Author(a);
}

Book::Book(string n, Author a) {
    name = n;
    author = a;
}

Book::Book(string n, string a, string s)
{
    name = n;
    author = Author(a, name);
    section = Section(s);
}

Book::~Book()
{
}
