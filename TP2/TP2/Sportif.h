#pragma once
#ifndef SPORTIF_H_
#define SPORTIF_H_
#include <string>

class Sportif
{
protected:
	std::string nom;
	std::string prenom;

public:
	Sportif();
	~Sportif();
};

#endif