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
    longeur = l;
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
	aire = longeur*largeur;
	return aire;
}

void Rectangle::afficher(ostream& s)
{
	s << "Rectangle(x=" << ancrage.x << ",y="<< ancrage.y << ",l=" << longeur << ",h=" << largeur << ",aire=" << aire <<  ")" << endl;
}