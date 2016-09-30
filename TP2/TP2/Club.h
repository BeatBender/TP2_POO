#pragma once
#ifndef CLUB_H_
#define CLUB_H_
#include <string>
#include "Palmares.h"
#include "Joueur.h"
#include <vector>
#include <iostream>
#include "Date.h"

using namespace std;
class Palmares;
class Club
{
private:
	//Variables de club
	string nom;
	string histoire;
	string couleur;
	//Date dateCreation;
	vector<Joueur> vect_joueurs;
	vector<Palmares> vect_palmares;
	//Stade stadeClub;
	string ville;
	string adresse;
	//Personne staffTech[];

public:
	//Constructeurs
	Club(void);
	Club(string,string,string,string,string);
	
	//Gestion des joueurs
	//Nom,Prénom,Taille,Poid,Ville de naissance
	void ajoutJoueur(string,string,float,float,string);

	//Gestion des palmares
	//Titre,Jours,Mois,Annee
	void ajoutPalmares(string,string,string,string);

	//Accesseurs GET
	string getNom(void){return nom;}
	string getHist(void){return histoire;}
	string getCoul(void){return couleur;}
	string getVille(void){return ville;}
	string getAdr(void){return adresse;}
	int getNbJoueur(void){return vect_joueurs.size();}
	Joueur* getJoueur(int i){return &vect_joueurs.at(i);}
	Palmares* getPalmares(int i){return &vect_palmares.at(i);}
	int getNbPalmares(void){return vect_palmares.size();}
};


#endif