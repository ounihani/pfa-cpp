#include "Employee.h"
#include <string>
Employee::Employee():User() {
	cout << "Enter the salary :" << endl;
	cin >> salaire;
	cout << "Enter the post :" << endl;
	cin >> poste;
}
Employee::Employee(int id, string name, string surname, date dateOfBirth, string poste, float salaire):User(id,name,surname, dateOfBirth)
{
	this->poste = poste;
	this->salaire = salaire;
}
string Employee::getPoste() {
	return poste;
}

void Employee::setPoste(string poste) {
	this->poste = poste;
}

float Employee::getSalaire() {
	return salaire;
}

void Employee::setSalaire(float salaire) {
	this->salaire = salaire;
}
void Employee::show() {
	User::show();
	cout << "Salary : " << salaire << endl;
	cout << "Task : " << poste << endl;
}