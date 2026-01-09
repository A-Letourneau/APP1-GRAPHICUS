/********
 * Fichier: forme.h
 * Auteurs: C.-A. Brunet
 * Date: 28 novembre 2025
 * Description: Déclaration des classes de formes géométriques. La
 *    classe Forme ne doit pas être modifiée.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "forme.h"

class Rectangle: public Forme{
public:
	Rectangle(int l, int h, int x, int y);
	virtual ~Rectangle();
	
    int longeur = 0;
    int largeur = 0;

	float aire = 0;
	virtual double aire();
	virtual void afficher(ostream & s);
};

#endif