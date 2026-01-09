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

Cercle::Cercle(int r, int x, int y)
{
	rayon = r;
	ancrage.x = x;
	ancrage.y = y;
	Aire();
}
Cercle::~Cercle()
{

}

Cercle::Aire()
{
	aire = rayon * rayon * 3.14159;
}


