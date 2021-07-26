
#include <iostream>
#include <istream>
#include <stdio.h>
#include <string>

using namespace std;

// prototypes
void displayWelcome();
void displayMenu();
void processMenuSelection(char);
void studentSignin();
void adminSignin();

int main(int argc, char const *argv[])
{
	cout << "hello" << endl;
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
	cout << "finish studentSignin on main." << endl;
}

void adminSignin()
{	
	loginPrompt();
	//cout << "finish adminSignin on main." << endl;
}

void loginPrompt()
{
	string userName;
	char passWord[20];

	cout << "Enter the username: ";
	cin >> userName;

	cout << "\nEnter the password: ";
	cin >> passWord;
}