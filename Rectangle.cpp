/********
 * Fichier: Rectangle.cpp
 * Auteurs: Noémie Boisjoly et Alexis Létourneau
 * Date: 13 janvier 2026
 * Description: Déclaration d'objet Rectangle et sa gestion.
********/

#include "Rectangle.h"

Rectangle::Rectangle(int x, int y, int l, int h)
{
    longueur = abs(l);
    largeur = abs(h);

	ancrage.x = x;
	ancrage.y = y;
	aire();
}
Rectangle::~Rectangle()
{

}

double Rectangle::aire()
{
	aireRectangle = longueur*largeur;
	return aireRectangle;
}

void Rectangle::afficher(ostream& s)
{
	s << "Rectangle(x=" << ancrage.x << ",y="<< ancrage.y << ",l=" << longueur << ",h=" << largeur << ",aire=" << aireRectangle <<  ")" << endl;
}

//Faire une methode pour modifier
void Rectangle::modifierLongueur(int l){
	longueur = l;
	aire();
}

void Rectangle::modifierLargeur(int h){
	largeur = h;
	aire();
}

void Rectangle::modifierX(int x){
	ancrage.x = x;
}
void Rectangle::modifierY(int y){
	ancrage.y = y;
}

//Faire une methode pour lire
int Rectangle::lireLongueur() const{
	return longueur;
}

int Rectangle::lireLargeur() const{
	return largeur;
}

int Rectangle::lireX() const{
	return ancrage.x;
}

int Rectangle::lireY() const{
	return ancrage.y;
}