#ifndef _PROPRIETAIRE_H
#define _PROPRIETAIRE_H

#include "User.h"


class Proprietaire : public User {
public:

	void addLogement();

	void editLogement();

	void deleteLogement();

	void getMyLogements();

	void getMyContracts();

	void editProfile();
};

#endif //_PROPRIETAIRE_H