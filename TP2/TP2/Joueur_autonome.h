#pragma once
#ifndef JOUEURA_H_
#define JOUEURA_H_
#include "Joueur.h"

using namespace std;

class Joueur_autonome : public Joueur
{
public:
	Joueur_autonome();
	Joueur_autonome(string, string, float, float, string, vector<Parcours>);
	~Joueur_autonome();

	//Accesseur GET
	string GetNom();
	string GetPrenom();
	float GetTaille();
	float GetPoids();
	string GetVilleNaissance();
	vector<Parcours> GetVecteurParcours();

private:

};

#endif