#include "Match.h"

using namespace std;

Match::Match()
{

}

Match::Match(Equipe local, Equipe adverse, list<Periode> periodes, Resultat final)
{
	this->equipe_local = local;
	this->equipe_adverse = adverse;
	this->liste_periodes = periodes;
	this->resultat_final = final;
}

Match::~Match()
{

}

//GET
Equipe Match::GetEquipeLocal()
{
	return this->equipe_local;
}

Equipe Match::GetEquipeAdverse()
{
	return this->equipe_adverse;
}

list<Periode> Match::GetListePeriode()
{
	return this->liste_periodes;
}

Resultat Match::GetResultat()
{
	return this->resultat_final;
}