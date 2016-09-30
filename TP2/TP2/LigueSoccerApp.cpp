// 8PRO114_TP_1_Console.cpp : définit le point d'entrée pour l'application console.
//


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
		
			default : cout << "Choix invalide" << endl;
			
			}
		system("cls");
		menuPrincipale();
		cin >> input;
		}


	return 0;
}

