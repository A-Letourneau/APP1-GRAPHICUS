/********
 * Fichier: Carre.h
 * Auteurs: Noémie Boisjoly et Alexis Létourneau
 * Date: 13 janvier 2026
 * Description: Déclaration d'objet Carre et sa gestion.
********/
#ifndef CARRE_H
#define CARRE_H

#include "forme.h"

class Carre: public Forme{
public:
	Carre(int c, int x, int y);
	virtual ~Carre();
	
    int cote = 0;

	float aireCarre = 0;
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