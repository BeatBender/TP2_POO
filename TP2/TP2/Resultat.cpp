#include "Resultat.h"

using namespace std;

Resultat::Resultat()
{

}

Resultat::Resultat(int buts_local, int buts_adverse)
{
	this->nb_buts_local = buts_local;
	this->nb_buts_adverse = buts_adverse;
}

Resultat::~Resultat()
{

}

int Resultat::GetNbButsLocal()
{
	return this->nb_buts_local;
}

int Resultat::GetNbButsAdverse()
{
	return this->nb_buts_adverse;
}