/********
 * Fichier: Rectangle.cpp
 * Auteurs: C.-A. Brunet
 * Date: 28 novembre 2025
 * Description: Implémentation des méthodes des classes décrites dans
 *    forme.h. Les méthodes de la classe Forme ne doivent pas être
 *    modifiées.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/

#include "Rectangle.h"

Rectangle::Rectangle(int l, int h, int x, int y)
{
    longueur = l;
    largeur = h;

	ancrage.x = x;
	ancrage.y = y;
	aire();
}
Rectangle::~Rectangle()
{

}

double Rectangle::aire()
{
	aire = longueur*largeur;
	return aire;
}

void Rectangle::afficher(ostream& s)
{
	s << "Rectangle(x=" << ancrage.x << ",y="<< ancrage.y << ",l=" << longeur << ",h=" << largeur << ",aire=" << aire <<  ")" << endl;
}

//Faire une methode pour modifier
void Rectangle::modifierLongueur(int l){
	longueur = l;
}

void Rectangle::modifierLargeur(int h){
	largeur = h;
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
	return ancrage.Y;
}