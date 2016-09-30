#include "Club.h"

//Constructeur par commandes
Club::Club()
{

}

//Constructeur de base du club
Club::Club(string nom,string histoire,string couleur,string ville,string adresse)
{
	this->nom = nom;
	this->histoire = histoire;
	this->couleur = couleur;
	this->ville = ville;
	this->adresse = adresse;

	
}

//Gestion des joueurs
void Club::ajoutJoueur(string nom,string prenom,float taille,float poid,string villeNaissance)
{
	Joueur leJoueur(nom,prenom,taille,poid,villeNaissance);
	vect_joueurs.insert(vect_joueurs.begin(), leJoueur);
}

//Gestion des palmares
void Club::ajoutPalmares(string titre,string jours,string mois,string annee)
{
	Date laDate(jours,mois,annee);
	Palmares lePalmares(titre,laDate,this);
	vect_palmares.insert(vect_palmares.begin(), lePalmares);
}

