
#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"
#include "Book.h"

#include <string>
#include <vector>
using namespace std;

class Student: public User
{
private:
	int idNumber;		  // idk 
	Book booksRented[10]; // 10 should be max number of books any student can rent
	// books checked out field
	vector<Book> booksCheckedOut;
	// Book[SIZE] cart; or vector<Book> cart;
public:
	Student();
	Student(string);
	~Student();
	void createStudent(string);
	// add to cart function
};

#endif

// change to user add priorities ???
// set password ffrom superuser to be able to create other admins
