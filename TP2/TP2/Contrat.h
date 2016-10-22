#pragma once
#ifndef CONTRAT_H_
#define CONTRAT_H_
#include "Joueur.h"
#include "Club.h"
#include "Date.h"

using namespace std;

class Contrat
{
public:
	Contrat();
	Contrat(Joueur, Club, Club, int, Date, Date);
	~Contrat();

	//Accesseur GET
	Joueur GetJoueurContractant();
	Club GetClubContractant();
	Club GetClubLibere();
	int GetDureeContrat();
	Date GetDateEntree();
	Date GetDateContrat();

private:
	Joueur joueurContractant;
	Club clubContractant;
	Club clubLibere;
	int dureeContrat;
	Date dateEntree;
	Date dateContrat;
};

#endif