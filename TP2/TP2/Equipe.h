#pragma once
#ifndef EQUIPE_H_
#define EQUIPE_H_
#include "Club.h"
#include "Joueur.h"

using namespace std;

class Equipe
{
public:
	Equipe();
	Equipe(Club, int, int, Joueur);
	~Equipe();

	//Accesseur GET
	Club GetClub();
	int GetNbJoueurGlace();
	Joueur GetCapitaine();

private:
	Club club;
	int nb_joueurs_glace, nb_gardiens;
	Joueur capitaine;
};

#endif