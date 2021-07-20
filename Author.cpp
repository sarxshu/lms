#include<iostream>
#include<string>
#include"Book.cpp"


class Author
{
private:
    /* data */
    string name;
public:
    Author();
    ~Author();
};

Author::Author(string n)
{
    name = n;
}

Author::~Author()
{

}
