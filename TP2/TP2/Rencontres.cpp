#include "Rencontres.h"

using namespace std;

Rencontres::Rencontres()
{

}

Rencontres::Rencontres(Date date, Club local, Club invite, Match resultat)
{
	this->date_rencontre = date;
	this->club_local = local;
	this->club_invite = invite;
	this->resultat = resultat;
}

Rencontres::~Rencontres()
{

}

Date Rencontres::GetDateRenctontre()
{
	return this->date_rencontre;
}

Club Rencontres::GetClubLocal()
{
	return this->club_local;
}

Club Rencontres::GetClubInvite()
{
	return this->club_invite;
}

Match Rencontres::GetResultat()
{
	return this->resultat;
}

Date Rencontres::SetDateRencontre(Date* date)
{
	this->date_rencontre = *date;
	return this->date_rencontre;
}

Club Rencontres::SetClubLocal(Rencontres* rencontre)
{
	this->club_local = rencontre->club_local;
	return this->club_local;
}

Club Rencontres::SetClubInvite(Rencontres* rencontre)
{
	this->club_invite = rencontre->club_invite;
	return this->club_invite;
}

Match Rencontres::SetResultat(Rencontres* rencontre)
{
	this->resultat = rencontre->resultat;
	return this->resultat;
}