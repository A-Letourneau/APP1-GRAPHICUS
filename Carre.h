/********
 * Fichier: forme.h
 * Auteurs: C.-A. Brunet
 * Date: 28 novembre 2025
 * Description: Déclaration des classes de formes géométriques. La
 *    classe Forme ne doit pas être modifiée.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/
#ifndef CARRE_H
#define CARRE_H

#include "forme.h"

class Carre: public Forme{
public:
	Carre(int c, int x, int y);
	virtual ~Carre();
	
    int cote = 0;

	float aire = 0;
	virtual double aire();
	virtual void afficher(ostream & s);

	virtual void modifierCote(int c);
	virtual void modifierX(int x);
	virtual void modifierY(int y);
	
	virtual int lireCote() const;
	virtual int lireX() const;
	virtual int lireY() const;
};



#endif