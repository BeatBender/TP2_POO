#pragma once
#ifndef RENCONTRES_H_
#define RENCONTRES_H_
#include "Date.h"
#include "Club.h"
#include "Match.h"

using namespace std;

class Rencontres
{
public:
	Rencontres();
	Rencontres(Date, Club, Club, Match);
	~Rencontres();

	//Accesseur GET
	Date GetDateRenctontre();
	Club GetClubLocal();
	Club GetClubInvite();
	Match GetResultat();

	//SET
	Date SetDateRencontre(Date*);
	Club SetClubLocal(Club*);
	Club SetClubInvite(Club*);
	Match SetResultat(Rencontres*);

private:
	//Variables
	Date date_rencontre;
	Club club_local;
	Club club_invite;
	Match resultat;
};

#endif