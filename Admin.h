
#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"

#include <string>

class Admin: public User
{
private:
	isAdmin = true;

public:
	Admin(string);
	~Admin();
};

#endif
