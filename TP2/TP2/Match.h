#pragma once
#ifndef MATCH_H_
#define MATCH_H_
#include "Equipe.h"
#include "Periode.h"
#include "Resultat.h"
#include <list>

class Match
{
public:
	Match();
	~Match();

private:
	Equipe equipe_local;
	Equipe equipe_adverse;
	list<Periode> liste_periodes;
	Resultat resultat_final;
};

#endif