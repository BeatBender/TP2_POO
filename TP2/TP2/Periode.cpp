#include "Periode.h"

using namespace std;

Periode::Periode()
{

}

Periode::Periode(int duree, int but_l, int but_a)
{
	this->duree = duree;
	this->nb_buts_local = but_l;
	this->nb_buts_adverse = but_a;
}

Periode::~Periode()
{

}

int Periode::GetDuree()
{
	return this->duree;
}

int Periode::GetNbButLocal()
{
	return this->nb_buts_local;
}

int Periode::GetNbButAdverse()
{
	return this->nb_buts_adverse;
}