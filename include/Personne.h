#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>
#include <string.h>
#include "date.h"
using namespace std;
class Personne
{
	//surcharge d'operateur << (affichage)
	//constructeur avec les parametres
public:
	Personne();
	Personne(string, string, date);
	string Getname() { return name; }
	void Setname(string val) { name = val; }
	string Getsubname() { return subname; }
	void Setsubname(string val) { subname = val; }
	date GetbirthDate() { return birthDate; }
	void SetbirthDate(date val) { birthDate = val; }
	void show();
protected:
	string name;
	string subname;
	date birthDate;
private:

};

#endif // PERSONNE_H
