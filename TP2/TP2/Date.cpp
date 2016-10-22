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

void Date::setJour(Date* date)
{
	cin >> date->jours;
	this->jours = date->jours;
	return;
}

void Date::setMois(Date* date)
{
	cin >> date->mois;
	this->mois = date->mois;
	return;
}

void Date::setAnnee(Date* date)
{
	cin >> date->annee;
	this->annee = date->annee;
	return;
}

