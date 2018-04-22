#include "Personne.h"
#include <iostream>
#include <string>
#include "date.h"
using namespace std;

Personne::Personne()
{

	cout << "Enter your name :" << endl;
	cin >> name;
	cout << "Enter your subname :" << endl;
	cin >> subname;
	cout << "Enter your birth date :(jj mm aaaa)" << endl;
	do {
		cin >> birthDate.dd;
	} while ((birthDate.dd<0) || (birthDate.dd>32));
	do {
		cin >> birthDate.mm;
	} while ((birthDate.mm<0) || (birthDate.mm>13));
	do {
		cin >> birthDate.aa;
	} while ((birthDate.aa<1950) || (birthDate.aa>2019));

}
Personne::Personne(string name, string subname, date birthDate)
{
	this->name = name;
	this->subname = subname;
	this->birthDate = birthDate;

}
void Personne::show() {
	cout << "Name : " << name << " " << subname << endl;
	cout << "Birth date : " << birthDate.dd << "-" << birthDate.mm << "-" << birthDate.aa << endl;
}
