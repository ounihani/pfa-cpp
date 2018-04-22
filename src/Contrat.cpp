#include "Contrat.h"



Contrat::Contrat()
{
}


Contrat::~Contrat()
{
}


int Contrat::getIdLogement()
{
	return idLogement;
}

void Contrat::setIdLogement(int idLogement)
{
	this->idLogement = idLogement;
}

int Contrat::getIdClient()
{
	return idClient;
}

void Contrat::setIdClient(int idClient)
{
	this->idClient = idClient;
}

string Contrat::getContratType()
{
	return contratType;
}

void Contrat::setContratType(string contratType)
{
	this->contratType = contratType;
}
