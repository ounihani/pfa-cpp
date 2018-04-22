/**
* Project Untitled
*/


#ifndef _PROBLEM_H
#define _PROBLEM_H
#include <iostream>
using namespace std;
class Problem {
public:
    Problem();
    ~Problem();
	int getId();
	void setId(int);

	string getTitle();
	void setTitle(string);

	string getDescription();
	void setDescription(string);

	int getIdReporter();
	void setIdReporter(int);

	int getIdLogement();
	void setIdLogement(int);
private:
	unsigned int id;
	string title;
	string descrip;
	int idReporter;
	int idLogement;
};

#endif //_PROBLEM_H
