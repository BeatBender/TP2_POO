#pragma once
#ifndef ARBITRE_H_
#define ARBITRE_H_
#include "Sportif.h"

using namespace std;

class Arbitre : public Sportif
{
public:
	Arbitre(string, string, string, int);
	~Arbitre();

	//Accesseur GET
	string GetNom();
	string GetPrenom();
	string GetLieuObtention();
	int GetExperience();

private:
	std::string lieu_obtention;
	int experience_arbitrage;
};

#endif