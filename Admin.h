
#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"

#include <string>

class Admin: public User
{
private:
	// isAdmin = true; //TODO fix this error

public:
	Admin(string);
	~Admin();
};

#endif
