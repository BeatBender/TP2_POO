#pragma once
#ifndef SPORTIF_H_
#define SPORTIF_H_
#include <string>

using namespace std;

class Sportif
{
protected:
	//Variables
	string nom;
	string prenom;

public:
	Sportif();
	Sportif(string, string);
	~Sportif();

	//Accesseur GET
	string GetNom();
	string GetPrenom();
};

#endif