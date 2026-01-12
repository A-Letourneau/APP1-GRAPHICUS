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

class Cercle: public Forme{
public:
	Cercle(int r, int x, int y);
	virtual ~Cercle();

	virtual double aire();
	void afficher(ostream & s);

	virtual void modifierRayon(int c);
	virtual void modifierX(int x);
	virtual void modifierY(int y);
	
	virtual int lireRayon() const;
	virtual int lireX() const;
	virtual int lireY() const;

private:
	int rayon = 0;
	float aireCercle = 0;
};

#endif




