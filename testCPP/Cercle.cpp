/********
 * Fichier: forme.cpp
 * Auteurs: C.-A. Brunet
 * Date: 28 novembre 2025
 * Description: Implémentation des méthodes des classes décrites dans
 *    forme.h. Les méthodes de la classe Forme ne doivent pas être
 *    modifiées.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/

#include "Cercle.h"

Cercle::Cercle(int x, int y, int r)
{
	rayon = r;
	ancrage.x = x;
	ancrage.y = y;
	aire();
}
Cercle::~Cercle()
{

}

double Cercle::aire()
{
	aireCercle = rayon * rayon * 3.14159;
	return aireCercle;
}

void Cercle::afficher(ostream& s)
{
	s << "Cercle(x=" << ancrage.x << ",y="<< ancrage.y << ",r=" << rayon << ")" << endl;
}


