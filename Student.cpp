
#include "Student.h"
#include "Book.cpp"

#include <iostream>
#include <string>

using namespace std;

Student::Student(string n)
{
	name = n;
}

Student::~Student()
{
}

void Student::createStudent(string n)
{
	name = n;
}
