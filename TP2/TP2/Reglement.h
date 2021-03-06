#pragma once
#ifndef REGLEMENT_H_
#define REGLEMENT_H_
#include <string>

using namespace std;

class Reglement
{
public:
	Reglement();
	Reglement(double, string, float, double, double);
	~Reglement();

	//Accesseur GET
	double GetSeuil();
	string GetDescriptionDroits();
	float GetMontantTransfert();
	double GetMontantEncaisseClub();
	double GetMontantEncaisseJoueur();

private:
	//Variables
	double seuil;
	string description_droits;
	float montant_transfert;
	double montant_encaisse_club, montant_encaisse_joueur;
};

#endif