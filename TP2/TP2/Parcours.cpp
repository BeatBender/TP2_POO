
#include "Parcours.h"

using namespace std;

Parcours::Parcours(string nomClub,Date datePassage)
{
	this->nomClub = nomClub;
	this->datePassage = datePassage;
}

string Parcours::getClub(){return nomClub;}

Date Parcours::getDate(){return datePassage;}