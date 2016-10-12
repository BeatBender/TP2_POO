#pragma once
#ifndef CONTRAT_H_
#define CONTRAT_H_
#include "Joueur.h"
#include "Club.h"
#include "Date.h"

class Contrat
{
public:
	Contrat();
	~Contrat();

private:
	Joueur joueurContractant;
	Club clubContractant;
	Club clubLibere;
	int dureeContrat;
	Date dateEntree;
	
	Date dateContrat;
};

#endif