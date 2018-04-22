#include "Logement.h"



int Logement::getId()
{
	return id;
}

void Logement::setId(int id)
{
	this->id = id;
}

int Logement::getPropId()
{
	return idProp;
}

void Logement::setPropId(int propId)
{
	this->idProp = propId;
}

string Logement::getDescrip()
{
	return descrip;
}

void Logement::setDescrip(string descrip)
{
	this->descrip = descrip;
}
//TODO 
Logement::Logement()
{
}


Logement::~Logement()
{
}
