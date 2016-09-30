#include "Palmares.h"

Palmares::Palmares(){}

Palmares::Palmares(string titre,Date date,Club* club)
{
	this->titre = titre;
	this->date = date;
	this->club = club;
}

