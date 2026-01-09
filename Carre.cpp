/********
 * Fichier: Carre.cpp
 * Auteurs: C.-A. Brunet
 * Date: 28 novembre 2025
 * Description: Implémentation des méthodes des classes décrites dans
 *    forme.h. Les méthodes de la classe Forme ne doivent pas être
 *    modifiées.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/

#include "Carre.h"

Carre::Carre(int c, int x, int y)
{
    cote = c;
	ancrage.x = x;
	ancrage.y = y;
	aire();
}
Carre::~Carre()
{

}

double Carre::aire()
{
	aire = cote*cote;
	return aire;
}

void Carre::afficher(ostream& s)
{
	s << "Carre(x=" << ancrage.x << ",y="<< ancrage.y << ",c=" << cote << ",aire=" << aire << ")"  << endl;
}