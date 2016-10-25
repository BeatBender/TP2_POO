#include "Sportif.h"
#include <iostream>

using namespace std;

Sportif::Sportif()
{

}

Sportif::Sportif(string nom, string prenom)
{
	this->nom = nom;
	this->prenom = prenom;
}

Sportif::~Sportif()
{

}

//GET
string Sportif::GetNom()
{
	return this->nom;
}

string Sportif::GetPrenom()
{
	return this->prenom;
}