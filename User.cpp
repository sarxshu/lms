
#include "User.h"

#include <string>

using namespace std;

User::User(string n)
{
	name = n;
}

User::User(string n, bool b) // only used to create admin by current existing admin
{
	name = n;
	isAdmin = b;
}

User::~User()
{
}
