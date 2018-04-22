/**
* Project Untitled
*/


#ifndef _AGENCE_H
#define _AGENCE_H
#include <iostream>
using namespace std;
class Agence {
public:

	void getProblemsList();

	void getReclamations();

	void getSuggestions();

	void DeleteSuggestion();

	void addEmployee();

	void editEmployee();

	void deleteEmployee();

	void getEmployeesList();

	void getContracts();

	void signContract();

	void addCustomerAccount();

	void deleteCustomer();

	void updateCustomer();

	void DeleteLogement();

	void getLogements();

	void getDepences();

	void getBenefice();

	void getFrais();

	int getId();

	void setName(string);
	string getName();
private:
	unsigned int id;
	string name;
};

#endif //_AGENCE_H