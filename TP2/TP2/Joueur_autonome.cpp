#include "Joueur_autonome.h"

using namespace std;

Joueur_autonome::Joueur_autonome()
{

}

Joueur_autonome::Joueur_autonome(string nom, string prenom, float taille, float poids, string villeN, vector<Parcours> parcours, Rupture contrat)
{
	this->nom = nom;
	this->prenom = prenom;
	this->taille = taille;
	this->poids = poids;
	this->villeNaissance = villeN;
	this->vect_parcours = parcours;
	this->contrat = contrat;
}

Joueur_autonome::~Joueur_autonome()
{

}

string Joueur_autonome::GetNom()
{
	return this->nom;
}

string Joueur_autonome::GetPrenom()
{
	return this->prenom;
}

float Joueur_autonome::GetTaille()
{
	return this->taille;
}

float Joueur_autonome::GetPoids()
{
	return this->poids;
}

string Joueur_autonome::GetVilleNaissance()
{
	return this->villeNaissance;
}

vector<Parcours> Joueur_autonome::GetVecteurParcours()
{
	return this->vect_parcours;
}