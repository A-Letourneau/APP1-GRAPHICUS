/********
 * Fichier: forme.h
 * Auteurs: C.-A. Brunet
 * Date: 28 novembre 2025
 * Description: Déclaration des classes de formes géométriques. La
 *    classe Forme ne doit pas être modifiée.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef CERCLE_H
#define CERCLE_H

#include "forme.h"

class Cercle: public Forme
{
public:
	Cercle(int r, int x, int y);
	virtual ~Cercle();
	int rayon = 0;
	float aire = 0;
	virtual double Aire() = 0;
};

#endif





