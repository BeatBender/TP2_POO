#include "Joueur_n_autonome.h"

using namespace std;

Joueur_n_autonome::Joueur_n_autonome()
{

}

Joueur_n_autonome::Joueur_n_autonome(string nom, string prenom, float taille, float poids, string villeN, vector<Parcours> parcours)
{
	this->nom = nom;
	this->prenom = prenom;
	this->taille = taille;
	this->poids = poids;
	this->villeNaissance = villeN;
	this->vect_parcours = parcours;
}


Joueur_n_autonome::~Joueur_n_autonome()
{

}
string Joueur_n_autonome::GetNom()
{
	return this->nom;
}

string Joueur_n_autonome::GetPrenom()
{
	return this->prenom;
}

float Joueur_n_autonome::GetTaille()
{
	return this->taille;
}

float Joueur_n_autonome::GetPoids()
{
	return this->poids;
}

string Joueur_n_autonome::GetVilleNaissance()
{
	return this->villeNaissance;
}

vector<Parcours> Joueur_n_autonome::GetVecteurParcours()
{
	return this->vect_parcours;
}