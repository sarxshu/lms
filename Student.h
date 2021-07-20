#ifndef STUDENT_H
#define STUDENT_H

#include<string>
using namespace std;

class Student {
    private:
        string name;
        int idNumber; // idk
        // Book[] booksRented;
    public:
        Student();
        Student(string);
        ~Student();
        void createStudent(string);
};

#endif