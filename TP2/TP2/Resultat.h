#pragma once
#ifndef RESULTAT_H_
#define RESULTAT_H_

using namespace std;

class Resultat
{
public:
	Resultat();
	Resultat(int, int);
	~Resultat();

	//Accesseur GET
	int GetNbButsLocal();
	int GetNbButsAdverse();

private:
	int nb_buts_local;
	int nb_buts_adverse;
};

#endif