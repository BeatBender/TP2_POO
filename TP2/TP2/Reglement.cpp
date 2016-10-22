#include "Reglement.h"

using namespace std;

Reglement::Reglement()
{

}

Reglement::Reglement(double seuil, string droits, float transfert, double clubEncaisse, double joueurEncaisse)
{
	this->seuil = seuil;
	this->description_droits = droits;
	this->montant_transfert = transfert;
	this->montant_encaisse_club = clubEncaisse;
	this->montant_encaisse_joueur = joueurEncaisse;
}

Reglement::~Reglement()
{

}

double Reglement::GetSeuil()
{
	return this->seuil;
}

string Reglement::GetDescriptionDroits()
{
	return this->description_droits;
}

float Reglement::GetMontantTransfert()
{
	return this->montant_transfert;
}

double Reglement::GetMontantEncaisseClub()
{
	return this->montant_encaisse_club;
}

double Reglement::GetMontantEncaisseJoueur()
{
	return this->montant_encaisse_joueur;
}