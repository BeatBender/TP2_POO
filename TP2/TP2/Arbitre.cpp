#include "Arbitre.h"
#include <string>

using namespace std;

//Constructeur de base d'un arbitre
Arbitre::Arbitre(string nom, string prenom, string lieu, int exp)
{
	this->nom = nom;
	this->prenom = prenom;
	this->lieu_obtention = lieu;
	this->experience_arbitrage = exp;
}

Arbitre::~Arbitre()
{

}

string Arbitre::GetNom()
{
	return this->nom;
}

string Arbitre::GetPrenom()
{
	return this->prenom;
}

string Arbitre::GetLieuObtention()
{
	return this->lieu_obtention;
}

int Arbitre::GetExperience()
{
	return this->experience_arbitrage;
}