/********
 * Fichier: Rectangle.h
 * Auteurs: Noémie Boisjoly et Alexis Létourneau
 * Date: 13 janvier 2026
 * Description: Déclaration d'objet Rectangle et sa gestion.
********/
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "forme.h"

class Rectangle: public Forme{
public:
	Rectangle(int l, int h, int x, int y);
	virtual ~Rectangle();
	
    int longueur = 0;
    int largeur = 0;

	float aireRectangle = 0;
	virtual double aire();
	virtual void afficher(ostream & s);


	virtual void modifierLongueur(int l);
	virtual void modifierLargeur(int h);
	virtual void modifierX(int x);
	virtual void modifierY(int y);
	
	virtual int lireLongueur() const;
	virtual int lireLargeur() const;
	virtual int lireX() const;
	virtual int lireY() const;
	//virtual void lireRectangle(int *l, int *h, int *x, int *y);

};

#endif