/**
* Project Untitled
*/


#ifndef _CONTRATS_H
#define _CONTRATS_H
#include <iostream>
using namespace std;
class Contrat {
public:
    Contrat();
    ~Contrat();
	int getIdLogement();
	void setIdLogement(int);

	int getIdClient();
	void setIdClient(int);

	string getContratType();
	void setContratType(string);

private:
	int idLogement;
	int  idClient;
	string contratType;
};

#endif //_CONTRATS_H
