#pragma once
#ifndef JOUEURNA_H_
#define JOUEURNA_H_
#include "Joueur.h"

using namespace std;

class Joueur_n_autonome : public Joueur
{
public:
	Joueur_n_autonome();
	Joueur_n_autonome(string, string, float, float, string, vector<Parcours>);
	~Joueur_n_autonome();

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