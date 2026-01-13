/********
 * Fichier: Cercle.h
 * Auteurs: Noémie Boisjoly et Alexis Létourneau
 * Date: 13 janvier 2026
 * Description: Déclaration d'objet Cercle et sa gestion.
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




