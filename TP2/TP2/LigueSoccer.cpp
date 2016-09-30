#include "LigueSoccer.h"


LigueSoccer::LigueSoccer(void)
{

}

//Ajoute un club
void LigueSoccer::ajouterClub(string nom,string histoire,string couleur,string ville,string adresse)
{
	Club tempClub(nom,histoire,couleur,ville,adresse);
	vect_club.insert(vect_club.begin(),tempClub);
	
}

//Ajoute un entraineur
void LigueSoccer::ajouterEntraineur(string nom,string prenom,string lieuObtention)
{
	Entraineur tempEntraineur(nom,prenom,lieuObtention);
	vect_entraineur.insert(vect_entraineur.begin(),tempEntraineur);	
}

//Supprime un club
void LigueSoccer::supprimerClub(int i){

	int nbClub = vect_club.capacity();

	//Validation du numeros
	if(i >= 0 && i <= nbClub)
		{
			vect_club.erase(vect_club.begin() + i);
		}

}

//Ajoute un joueur a un club
void LigueSoccer::ajouterJoueurAClub(string nom,string prenom,float taille,float poids,string villeNaissance,Club* club)
{
	club->ajoutJoueur(nom,prenom,taille,poids,villeNaissance);
}

