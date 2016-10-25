#include "Rupture.h"

using namespace std;

Rupture::Rupture()
{

}

Rupture::Rupture(Joueur joueur, string raison, Club nouvClub, float penalite)
{
	this->joueur = joueur;
	this->raison = raison;
	this->nouvClub = nouvClub;
	this->penalite = penalite;
}

Rupture::~Rupture()
{

}

//GET
Joueur Rupture::GetJoueur()
{
	return this->joueur;
}

string Rupture::GetRaison()
{
	return this->raison;
}

Club Rupture::GetNouvClub()
{
	return this->nouvClub;
}

float Rupture::GetPenalite()
{
	return this->penalite;
}