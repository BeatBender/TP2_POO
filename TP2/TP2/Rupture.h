#pragma once
#ifndef RUPTURE_H_
#define RUPTURE_H_
#include "Joueur.h"
#include "Club.h"
#include "string"

using namespace std;

class Rupture
{
public:
	Rupture();
	Rupture(Joueur, string, Club, float);
	~Rupture();

	//Accesseur GET
	Joueur GetJoueur();
	string GetRaison();
	Club GetNouvClub();
	float GetPenalite();

private:
	//Variables
	Joueur joueur;
	string raison;
	Club nouvClub;
	float penalite;
};

#endif