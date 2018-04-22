#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include "User.h"

class Employee : public User {
public:
	Employee();
	Employee(int, string, string, date, string, float);
	string getPoste();
	void setPoste(string);
	float getSalaire();
	void setSalaire(float);
	void show();
private:
	string poste;
	float salaire;
};

#endif 