
#include "Section.h"
#include "User.h"

#include <iostream>
#include <istream>
#include <stdio.h>
#include <string>
#include <cstring>

using namespace std;

// prototypes
void displayWelcome();
void displayMenu();
void processMenuSelection(char);
void studentSignin();
void adminSignin();
void loginPrompt();
void populateLibrary();

int main(int argc, char const *argv[])
{
	/*
	map<int, string> users = {
		{9999, "password"}
		{1234, User("name", isAdmin)} <- kinda like this
	}*/ 		//This doesn't have to go here



	// where do we want the call to users[x]? So the x gets grabbed from the username/id login? 

	// in the loginfunction where the user inputs their userid, and it will return the object of user

	// get all book info from files

	// get all sections prefilled wth books
	// Section[Books] -> ComputerSection{book1, book2...etc.}
	//! edit sections to hold books
	Section Computer("Computer");
	Section Electrical("Electrical");
	Section Civil("Civil");
	Section Electronics("Electronics");
	Section Mechanical("Mechanical");
	Section Architecture("Architecture");

	char ch;
	displayWelcome();
	do
	{
		displayMenu(); //TODO: shows up twice after making choice. fix
		ch = getchar();
		processMenuSelection(ch);
	} while (ch != '0');
	return 0;
}

void displayWelcome()
{
	cout << "\t\t\tWelcome!" << endl;
	cout << "\tPlease enter a number from the options below." << endl;
}

void displayMenu()
{
	cout << endl;
	cout << "1. Sign in as Student" << endl;
	cout << "2. Sign in as Admin" << endl;
	cout << "0. EXIT" << endl;
	cout << "Option: ";
}

void processMenuSelection(char option)
{
	if (option == '0')
	{
		return;
	}

	switch (option)
	{
	case '1':
		studentSignin(); //TODO: make this function work. (based on userID / ID#)
		break;

	case '2':
		adminSignin(); //TODO: make this function work. (based on userID / ID#)
		break;

	default:
		cout << "Please enter a valid option.";
		break;
	}
}

void studentSignin()
{
	loginPrompt();
}

void adminSignin()
{	
	bool pwIsValid;
}

void loginPrompt()
{
	int userID;
	// char passWord[8];

	cout << "Enter the username: ";
	cin >> userID;
	
	// cout << "\nEnter the password: ";
	// cin >> passWord;
	//return passWord;
}


// Sections -> Computer, Electrical, Civil, Electronics, Mechanical, and Architecture
// create books in file
// Department of books would come from a file.  Computer.txt, Electrical.txt, etc. 
void populateLibrary(){
	
}
