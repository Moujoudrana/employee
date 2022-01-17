#include "commercial.h"
#include <iostream>
using namespace std;


commercial::commercial(string nom, float indice, float vm)
	: employe(nom, indice)
{
	this->venteMois = vm;
}



void commercial::miseajour(float V)
{
	this->venteMois =this-> venteMois + V;
}



float commercial::calculerSal() const
{
	return this->indiceSal + this->venteMois * 0.05;
}



commercial::~commercial()
{
	cout << "Destructeur de la classe Commercial" << endl;
}