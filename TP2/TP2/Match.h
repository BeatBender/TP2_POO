#pragma once
#ifndef MATCH_H_
#define MATCH_H_
#include "Equipe.h"
#include "Periode.h"
#include "Resultat.h"
#include <list>

using namespace std;

class Match
{
public:
	Match();
	Match(Equipe, Equipe, list<Periode>, Resultat);
	~Match();

	//Accesseur GET
	Equipe GetEquipeLocal();
	Equipe GetEquipeAdverse();
	list<Periode> GetListePeriode();
	Resultat GetResultat();

private:
	//Variables
	Equipe equipe_local;
	Equipe equipe_adverse;
	list<Periode> liste_periodes;
	Resultat resultat_final;
};

#endif