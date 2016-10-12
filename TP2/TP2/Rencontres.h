#pragma once
#ifndef RENCONTRES_H_
#define RENCONTRES_H_
#include "Date.h"
#include "Club.h"
#include "Match.h"

class Rencontres
{
public:
	Rencontres();
	~Rencontres();

private:
	Date date_rencontre;
	Club club_local;
	Club club_invite;
	Match resultat;
};

#endif