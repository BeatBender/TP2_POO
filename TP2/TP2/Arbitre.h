#pragma once
#ifndef ARBITRE_H_
#define ARBITRE_H_
#include "Sportif.h"

class Arbitre : public Sportif
{
public:
	Arbitre();
	~Arbitre();

private:
	std::string lieu_obtention;
	int experience_arbitrage;
};

#endif