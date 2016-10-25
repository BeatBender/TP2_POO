/*
	8PRO114_TP_2_Console.cpp�: d�finit le point d'entr�e pour l'application console.
	Patrick Levesque - LEVP19099302
	Les classes ont �t� cr��s sans probl�me. J'ai aussi impl�ment� les h�ritages (Arbitre, Joueur autonome et non autonome) facilement.
	J'ai ensuite impl�ment� le calendrier des rencontres. Depuis le d�but du TD, j'ai cru que c'est un club qui jouait dans un match.
	Derni�rement, je me suis rendu compte que c'est une �quipe qui joue dans un match. Mon calendrier d�crit donc des matchs entre clubs.
	J'ai voulu faire un vecteur static dans LigueSoccer pour stocker les rencontres. Une erreur est alors apparue, la LNK2001. Je n'ai pas �t�
	capable de r�soudre cette erreur malgr� de l'aide que j'ai demand� � un coll�gue qui a d�j� fait le cours. Vous verrez cette erreur en g�n�rant
	la solution. Pour le reste des fonctions, j'ai bloqu� sur plusieurs d'entre elles. J'en ai confondu quelques-unes, j'ai cr�� un calendrier et on peut
	y ajouter des rencontres. Normalement, on aurait aussi pu afficher les rencontres, mais l'erreur LNK2001 m'a bloqu� totalement.
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

