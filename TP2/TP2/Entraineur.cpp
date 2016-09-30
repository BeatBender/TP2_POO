#include "Entraineur.h"

//Constructeur
Entraineur::Entraineur(void)
{
}

//Constructeur
Entraineur::Entraineur(string nom, string prenom, string lieu)
{
	this->nom = nom;
	this->prenom = prenom;
	this->lieuObtention = lieu;
}

//Ajoute un palmares a l'entraineur
void Entraineur::ajouterPalmares(string titre,string jours,string mois,string annee,Club* club)
{
	Date laDate(jours,mois,annee);
	Palmares lePalmares(titre,laDate,club);
	vect_titre.insert(vect_titre.begin(), lePalmares);

}

