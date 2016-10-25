#pragma once
#ifndef PERIODE_H_
#define PERIODE_H_

using namespace std;
class Periode
{
public:
	Periode();
	Periode(int, int, int);
	~Periode();

	//Accesseur GET
	int GetDuree();
	int GetNbButLocal();
	int GetNbButAdverse();

private:
	//Variables
	int duree;
	int nb_buts_local;
	int nb_buts_adverse;
};

#endif