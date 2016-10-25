#include "Contrat.h"

using namespace std;

Contrat::Contrat()
{

}

//Constructeur de base d'un contrat
Contrat::Contrat(Joueur joueur, Club clubC, Club clubL, int duree, Date entree, Date contrat)
{
	this->joueurContractant = joueur;
	this->clubContractant = clubC;
	this->clubLibere = clubL;
	this->dureeContrat = duree;
	this->dateEntree = entree;
	this->dateContrat = contrat;
}

Contrat::~Contrat()
{

}

//GET
Joueur Contrat::GetJoueurContractant()
{
	return this->joueurContractant;
}

Club Contrat::GetClubContractant()
{
	return this->clubContractant;
}

Club Contrat::GetClubLibere()
{
	return this->clubLibere;
}

int Contrat::GetDureeContrat()
{
	return this->dureeContrat;
}

Date Contrat::GetDateEntree()
{
	return this->dateEntree;
}

Date Contrat::GetDateContrat()
{
	return this->dateContrat;
}