#ifndef STUDENT_H
#define STUDENT_H

#include<string>
using namespace std;

class Student {
    private:
        string name;
        int idNumber; // idk
        Book booksRented[10]; // 10 should be max number of books any student can rent
    public:
        Student();
        Student(string);
        ~Student();
        void createStudent(string);
};

#endif

// change to user add priorities
// set password ffrom superuser to be able to create other admins