#include "Joueur.h"

Joueur::Joueur(){}

//Constructeur Joueur
Joueur::Joueur(string nom, string prenom, float taille,float poids,string villeNaissance)
{
	this->nom = nom;
	this->prenom = prenom;
	this->taille = taille;
	this->poids = poids;
	this->villeNaissance = villeNaissance;
}

//Accesseur GET
string Joueur::getNom(){return nom;}
string Joueur::getPrenom(){return prenom;}
float Joueur::getTaille(){return taille;}
float Joueur::getPoids(){return poids;}
string Joueur::getVilleNaissance(){return villeNaissance;}

