#include "Equipe.h"

using namespace std;

Equipe::Equipe()
{

}

Equipe::Equipe(Club club, int nbJoueurGlace, int nbGardien, Joueur capitaine)
{
	this->club = club;
	this->nb_joueurs_glace = nbJoueurGlace;
	this->nb_gardiens = nbGardien;
	this->capitaine = capitaine;
}

Equipe::~Equipe()
{

}

Club Equipe::GetClub()
{
	return this->club;
}

int Equipe::GetNbJoueurGlace()
{
	return this->nb_joueurs_glace;
}

Joueur Equipe::GetCapitaine()
{
	return this->capitaine;
}