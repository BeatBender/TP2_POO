#pragma once
#ifndef REGLEMENT_H_
#define REGLEMENT_H_
#include <string>

class Reglement
{
public:
	Reglement();
	~Reglement();

private:
	double seuil;
	std::string description_droits;
	float montant_transfert;
	double montant_encaisse_club, montant_encaisse_joueur;
};

#endif