#include "personnel.h"
#include <iostream>

personnel::personnel()
{
	this->vec = vector <employe*>();
}



void personnel::addEmploye(employe* e)
{
	this->vec.push_back(e);
}



float personnel::sommeSal()
{
	float sommeSal = 0;
	for (int i = 0; i < this->vec.size(); i++)
	{
		sommeSal = sommeSal+this->vec[i]->calculerSal();
	}
	return sommeSal;
}



personnel::~personnel()
{
	this->vec.clear();
}