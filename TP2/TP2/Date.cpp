#include "Date.h"
#include <iostream>

//Constructeurs
Date::Date(void){
}

Date::Date(string jours,string mois,string annee)
{
	this->jours = jours;
	this->mois = mois;
	this->annee = annee;
}

