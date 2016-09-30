#include "Affichage.h"

//Constructeur
Affichage::Affichage(LigueSoccer* ligueSoccer)
{
	this->ligueSoccer = ligueSoccer;

}

//Ajout d'un Club
void Affichage::ajouterClub()
{
	//Variables temporaires
	string nom;
	string histoire;
	string couleur;
	string ville;
	string adresse;

	//Affichage du formulaire
	system("cls");
	cout << "====== Ajout d'un club ======" << endl;
	cout << "= Entrez un nom : "; cin >> nom;			
	cout << "= Entrez une histoire : "; cin >> histoire; 
	cout << "= Entrez une couleur : "; cin >> couleur; 
	cout << "= Entrez une ville : "; cin >> ville; 
	cout << "= Entrez une adresse : "; cin >> adresse;
	//Ajout du club
	ligueSoccer->ajouterClub(nom,histoire,couleur,ville,adresse);
}

//Affichage de Clubs
void Affichage::afficherClub()
{
	system("cls");
	int nbClub = ligueSoccer->vect_club.size();
	//Affichage de tout les clubs
	cout << "========= Affichage des Clubs =======" << endl;
	cout << "= Nombre de clubs : " << nbClub << endl << endl;

	for(int i=0;i<nbClub;i++)
		{
		cout << "Nom du club :" << ligueSoccer->getClub(i)->getNom() << endl;
		cout << "Histoire du club :" << ligueSoccer->getClub(i)->getHist() << endl;
		cout << "Couleur du club :" << ligueSoccer->getClub(i)->getCoul() << endl;
		cout << "Ville du club :" << ligueSoccer->getClub(i)->getVille() << endl;
		cout << "Adresse du club :" << ligueSoccer->getClub(i)->getAdr() << endl;
		cout << "====================== " << ligueSoccer->getClub(i)->getNbPalmares() << " Palmares ====================" << endl << endl;
		}

	system("pause");
}

//Supprimer un Club
void Affichage::supprimerClub(){
	
	system("cls");
	int nbClub = ligueSoccer->vect_club.size();
	int choix;
	cout << "====== Suppression d'un Club ======" << endl; 

	for(int i=0;i<nbClub;i++)
		{
			cout << "= " << i+1 << ") Club : " << ligueSoccer->vect_club[i].getNom() << endl;	
		}

	cout << "Entrez le numeros du club a supprimer : "; cin >> choix;
	choix--;

	ligueSoccer->supprimerClub(choix);

	system("cls");
	cout << "========= Supression ======= " << endl;
	cout << "= Suppression Confirmee" << endl << endl;

	system("pause");

}

//Ligue précodé pour les tests
void Affichage::ligueHardcoder(){
	
	//Liste de clubs
	ligueSoccer->ajouterClub("Les Tanant","Ben des choses","Bleu","Bidonville","2020 du finfin");
	ligueSoccer->ajouterClub("Verminator","Ben des choses","Bleu","Bidonville","2020 du finfin");
	ligueSoccer->ajouterClub("Les Trolls","Ben des choses","Bleu","Bidonville","2020 du finfin");
	ligueSoccer->ajouterClub("Canada","Ben des choses","Bleu","Bidonville","2020 du finfin");
	ligueSoccer->ajouterClub("Patate","Ben des choses","Bleu","Bidonville","2020 du finfin");

	//Liste de joueurs
	int nbClub = ligueSoccer->vect_club.size();

	for(int i=0;i<nbClub;i++)
		{
			ligueSoccer->vect_club[i].ajoutJoueur("Joe","tremblay",12,12,"Chicoutimi");
			ligueSoccer->vect_club[i].ajoutJoueur("Kikoup","tremblay",12,12,"Chicoutimi");
			ligueSoccer->vect_club[i].ajoutJoueur("Wassup","tremblay",12,12,"Chicoutimi");
			ligueSoccer->vect_club[i].ajoutJoueur("Guy","tremblay",12,12,"Chicoutimi");
			ligueSoccer->vect_club[i].ajoutJoueur("Voshka","tremblay",12,12,"Chicoutimi");
		if(i == 0)
			ligueSoccer->getClub(0)->ajoutPalmares("Les plus brutales","2","2","2000");
		
		if(i == 3)
			{
			ligueSoccer->getClub(0)->ajoutPalmares("Les plus méchants!","2","2","2000");
			ligueSoccer->getClub(0)->ajoutPalmares("Les plus délicats...","2","2","2000");		
			}
		}

	//Liste d'entraineur
	ligueSoccer->ajouterEntraineur("Bobby","Lapointe","Quebec");
	ligueSoccer->getEntraineur(0)->ajouterPalmares("Meilleur Cogneur","1","1","2010",ligueSoccer->getClub(0));

	ligueSoccer->ajouterEntraineur("Roger","Baston","Montreal");
	ligueSoccer->getEntraineur(0)->ajouterPalmares("Le plus chialeux","1","1","2010",ligueSoccer->getClub(2));
	ligueSoccer->getEntraineur(0)->ajouterPalmares("Meilleur porteur d'eau","1","1","2010",ligueSoccer->getClub(2));
	
	ligueSoccer->ajouterEntraineur("Bob","KassePied","Loltown");
}

//Affiche les joueurs
void Affichage::afficherJoueur(){

	system("cls");

	int nbClub = ligueSoccer->vect_club.size();
	int choix;
	cout << "====== Selection d'un Club ======" << endl; 

	for(int i=0;i<nbClub;i++)
		{
			cout << "= " << i+1 << ") Club : " << ligueSoccer->vect_club[i].getNom() << endl;	
		}

	cout << "Entrez le numeros du club a afficher les joueurs : "; cin >> choix;
	choix--;

	system("cls");

	//Pointeurs
	Club* club = ligueSoccer->getClub(choix);
	int nbJoueurs = club->getNbJoueur();
	
	cout << " ======= Equipe :" << club->getNom() << "==========" << endl;
	cout << " = Nombre de joueurs : " << nbJoueurs << endl;
	
	for(int i=0;i<nbJoueurs;i++)
		{
		Joueur* pJoueur = club->getJoueur(i);
		cout << " = " << i+1 << ") " << pJoueur->getNom() << endl;
		}

	cout << endl << endl;
	system("pause");
}

//Affiche les entraineurs
void Affichage::afficherEntraineurs(){

	system("cls");
	int nbEntraineurs = ligueSoccer->getNbEntraineur();

	cout << "========= Liste des entraineurs =======" << endl;

	cout << " = Nombre d'entraineurs : " << nbEntraineurs << endl;
	
	for(int i=0;i<nbEntraineurs;i++)
		{
		Entraineur* pEntraineur = ligueSoccer->getEntraineur(i);
		cout << " = " << i+1 << ") " << pEntraineur->getNom() << " " << pEntraineur->getPrenom() << endl;
		cout << " =    Lieu obtention du grade : " << pEntraineur->getlieuObtention() << endl;
		
		int nbPalmares = pEntraineur->getNbPalmares();

		for(int j=0;j<nbPalmares;j++)
			{
			Palmares* pPalmares = ligueSoccer->getEntraineur(i)->getPalmares(j);
			cout << " =" << endl;
			cout << " =" << endl;
			cout << " =	======== Palmares ========" << endl;
			cout << " =		Titre : " << pPalmares->getTitre() << endl;
			cout << " =		Date  : " << pPalmares->getDate() << endl;
			cout << " =		Club  : " << pPalmares->getClub()->getNom() << endl;
			cout << " =" << endl;
			}
		cout << " =" << endl;
		}

	cout << endl << endl;


	system("pause");



}

//Affiche le meilleur entraineur
void Affichage::afficherMeilleurEntraineur(){

	system("cls");

	//Variable tampon
	int nbEntraineurs = ligueSoccer->getNbEntraineur();
	if(nbEntraineurs)
	{
	int nbPalmares=ligueSoccer->getEntraineur(0)->getNbPalmares(),cpt=0,index=0;
	Entraineur* unEntraineur;
	//Cherche le meilleur entraineur
	for(int i=0;i<nbEntraineurs;i++)
		{	
		for(int j=0;j<nbEntraineurs;j++)
			{
			if(ligueSoccer->getEntraineur(i)->getNbPalmares() < 
			   ligueSoccer->getEntraineur(j)->getNbPalmares() )
				{
				nbPalmares = ligueSoccer->getEntraineur(j)->getNbPalmares();
				index = j;
				break;
				}		
			}	
		}
	unEntraineur = ligueSoccer->getEntraineur(index);

	//Affiche le résultat
	cout << " ======= Entraineur le plus titre =======" << endl;
	cout << " = Nom : " << unEntraineur->getNom() << endl;
	cout << " = Avec " << unEntraineur->getNbPalmares() << " palmares " << endl;
	cout << endl;

	}
	else
		cout << "Aucuns entraineurs trouves" << endl;

	system("pause");
}

//afficher le meilleur club
void Affichage::afficherMeilleurClub(){

	system("cls");

	//Variables tampons
	int nbClub = ligueSoccer->getNbClub();
	if(nbClub)
	{
	int nbPalmares=ligueSoccer->getClub(0)->getNbPalmares(),cpt=0,index=0;
	Club* unClub;
	//Cherche le meilleur club
	for(int i=0;i<nbClub;i++)
		{	
		for(int j=0;j<nbClub;j++)
			{
			if(ligueSoccer->getClub(i)->getNbPalmares() < 
			   ligueSoccer->getClub(j)->getNbPalmares() )
				{
				nbPalmares = ligueSoccer->getClub(j)->getNbPalmares();
				index = j;
				break;
				}		
			}	
		}
	unClub = ligueSoccer->getClub(index);
	//Affiche le resultat
	cout << " ======= Club le plus titre =======" << endl;
	cout << " = Nom : " << unClub->getNom() << endl;
	cout << " = Avec " << unClub->getNbPalmares() << " palmares " << endl;
	cout << endl;

	}
	else
		cout << "Aucuns clubs trouves" << endl;

	system("pause");


}