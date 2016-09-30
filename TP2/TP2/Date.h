#pragma once
#ifndef DATE_H_
#define DATE_H_
#include <string>

using namespace std;

class Date
{
	//Variables de Date
	string jours;
	string mois;
	string annee;


public:
	Date(void);
	Date(string,string,string);

	//Format d'affichage
	string getDateToString(void){return jours+"/"+mois+"/"+annee;}

	//Accesseur GET
	string getJours(void){return jours;}
	string getMois(void){return mois;}
	string getAnnee(void){return annee;}
};

#endif
