#include "Problem.h"



Problem::Problem()
{
}


Problem::~Problem()
{
}

int Problem::getId()
{
	return id;
}

void Problem::setId(int id)
{
	this->id = id;
}

string Problem::getTitle()
{
	return title;
}

void Problem::setTitle(string title)
{
	this->title = title;
}

string Problem::getDescription()
{
	return descrip;
}

void Problem::setDescription(string descrip)
{
	this->descrip = descrip;
}

int Problem::getIdReporter()
{
	return idReporter;
}

void Problem::setIdReporter(int idReporter)
{
	this->idReporter = idReporter;
}

int Problem::getIdLogement()
{
	return idLogement;
}

void Problem::setIdLogement(int idLogement)
{
	this->idLogement = idLogement;
}
