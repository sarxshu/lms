#include<iostream>
#include<string>
#include"Student.h"
#include "Book.cpp"

using namespace std;

Student::Student(string n)
{
    name = n;
}

Student::~Student()
{
}

void Student::createStudent(string n) {
    name = n;
}
