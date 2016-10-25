/*
	8PRO114_TP_2_Console.cpp : définit le point d'entrée pour l'application console.
	Patrick Levesque - LEVP19099302
	Les classes ont été créés sans problème. J'ai aussi implémenté les héritages (Arbitre, Joueur autonome et non autonome) facilement.
	J'ai ensuite implémenté le calendrier des rencontres. Depuis le début du TD, j'ai cru que c'est un club qui jouait dans un match.
	Dernièrement, je me suis rendu compte que c'est une équipe qui joue dans un match. Mon calendrier décrit donc des matchs entre clubs.
	J'ai voulu faire un vecteur static dans LigueSoccer pour stocker les rencontres. Une erreur est alors apparue, la LNK2001. Je n'ai pas été
	capable de résoudre cette erreur malgré de l'aide que j'ai demandé à un collègue qui a déjà fait le cours. Vous verrez cette erreur en générant
	la solution. Pour le reste des fonctions, j'ai bloqué sur plusieurs d'entre elles. J'en ai confondu quelques-unes, j'ai créé un calendrier et on peut
	y ajouter des rencontres. Normalement, on aurait aussi pu afficher les rencontres, mais l'erreur LNK2001 m'a bloqué totalement.
*/


#include "LigueSoccer.h"
#include "Affichage.h"
#include <iostream>

using namespace std;


LigueSoccer* ligueSoccer = new LigueSoccer();
Affichage affichage(ligueSoccer);



void menuPrincipale(){
	cout << "====== Bienvenue sur ma ligue de soccer ======" << endl;
	cout << "= 1) Ajouter un club" << endl;
	cout << "= 2) Afficher les clubs " << endl;
	cout << "= 3) Supprimer un club" << endl;
	cout << "= 4) Afficher les joueurs" << endl;
	cout << "= 5) Afficher liste entraineurs" << endl;
	cout << "= 6) Afficher l'entraineur le plus titre" << endl;
	cout << "= 7) Afficher le club le plus titre" << endl;
	cout << "= 8) Ajouter une rencontre au calendrier" << endl;
	cout << "= 9) Afficher le calendrier des rencontres" << endl;
	cout << endl << endl;
	cout << "= 0) Quitter" << endl;
	cout << endl << endl << "Votre choix : ";


}

int main()
{
	affichage.ligueHardcoder();
	int input;
	menuPrincipale();
	cin >> input;

	while(input != 0)
		{

		//Boucle principale
		switch(input)
			{
			case 1: affichage.ajouterClub();					
					break;
		
			case 2: affichage.afficherClub();
					break;

			case 3: affichage.supprimerClub();
					break;
			
			case 4: affichage.afficherJoueur();
					break;

			case 5: affichage.afficherEntraineurs();
					break;

			case 6: affichage.afficherMeilleurEntraineur();
					break;

			case 7: affichage.afficherMeilleurClub();
					break;

			case 8: affichage.ajouterMatch();
				break;

			case 9: affichage.afficherCalendrier();
				break;
		
			default : cout << "Choix invalide" << endl;
			
			}
		system("cls");
		menuPrincipale();
		cin >> input;
		}


	return 0;
}

