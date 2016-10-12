#pragma once
#ifndef EQUIPE_H_
#define EQUIPE_H_
#include "Club.h"
#include "Joueur.h"

class Equipe
{
public:
	Equipe();
	~Equipe();

private:
	Club club;
	int nb_joueurs_glace, nb_gardiens;
	Joueur capitaine;
};

#endif