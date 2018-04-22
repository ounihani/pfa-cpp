#ifndef _CLIENT_H
#define _CLIENT_H

#include "User.h"


class Client : public User {
public:

	void acheter();

	void louer();

	void editProfile();

	void getLogementList();

	void reportProblem();
};

#endif //_CLIENT_H