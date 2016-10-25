#pragma once
#ifndef ARBITRE_H_
#define ARBITRE_H_
#include "Sportif.h"

using namespace std;

class Arbitre : public Sportif
{
public:
	//Constructeurs
	Arbitre(string, string, string, int);
	~Arbitre();

	//Accesseur GET
	string GetNom();
	string GetPrenom();
	string GetLieuObtention();
	int GetExperience();

private:
	//Variables
	string lieu_obtention;
	int experience_arbitrage;
};

#endif