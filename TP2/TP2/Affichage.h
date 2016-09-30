#pragma once
#include "LigueSoccer.h"
#include <string>
#include <iostream>
#include <vector>
#include "Joueur.h"
#include "Club.h"

using namespace std;

class Affichage
{
private:
	//Variables
	LigueSoccer* ligueSoccer;
	
public:
	//Constructeur
	Affichage(LigueSoccer*);
	//Ligue précodé
	void ligueHardcoder();
	//Menu ajouter un club
	void ajouterClub();
	//Menu afficher les clubs
	void afficherClub();
	//Menu supprimer les clubs
	void supprimerClub();
	//Menu afficher les joueurs
	void afficherJoueur();
	//Menu afficher les entraineurs
	void afficherEntraineurs();
	//Menu afficher les meilleurs entraineurs
	void afficherMeilleurEntraineur();
	//Menu afficher le meilleur club
	void afficherMeilleurClub();
};

