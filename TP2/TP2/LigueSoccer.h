#pragma once
#ifndef LIGUESOCCER_H_
#define LIGUESOCCER_H_
#include "Date.h"
#include "Palmares.h"
#include "Club.h"



#include "Entraineur.h"
#include "Joueur.h"
//#include "Parcours.h"
#include <vector>
#include <string>

using namespace std;

class Palmares;
class Club;

class LigueSoccer
{
public:
	//Variables
	vector<Club> vect_club;
	vector<Entraineur> vect_entraineur;
	
	//Constructeur
	LigueSoccer(void);
	//Ajoute un club ( Nom, Histoire, Couleur, Ville, Adresse )
	void ajouterClub(string,string,string,string,string);
	//Ajoute un joueur a un club
	void ajouterJoueurAClub(string,string,float,float,string,Club*);
	//Ajoute un entraineur a un club
	void ajouterEntraineur(string,string,string);
	//Supprime un club
	void supprimerClub(int);

	
	//Accesseur GET
	vector<Club>* getVectClub(){return &vect_club;}
	Club* getClub(int i){return &vect_club[i];}
	Entraineur* getEntraineur(int i){return &vect_entraineur[i];}
	int getNbEntraineur(void){return vect_entraineur.size();}
	int getNbClub(void){return vect_club.size();}
};

#endif
