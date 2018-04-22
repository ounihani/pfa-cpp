#pragma once
#include <iostream>
using namespace std;
class Logement
{
private:
	unsigned int id;
	unsigned int idProp;
	string descrip;
public:
	int getId();
	void setId(int);
	int getPropId();
	void setPropId(int);
	string getDescrip();
	void setDescrip(string);
	Logement();
	~Logement();
};

