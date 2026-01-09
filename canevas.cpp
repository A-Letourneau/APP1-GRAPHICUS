/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 28 novembre 2025
 * Description: Implémentation des méthodes des classes décrites dans
 *    canevas.h.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/

#include "canevas.h"

Canevas::Canevas()
{
	for (int i = 0; i < MAX_COUCHES; i++)
	{
		couches[i].indexCouche = i;
		couches[i].etat = 0;
	}
}

Canevas::~Canevas()
{

}

bool Canevas::reinitialiser()
{

}

bool Canevas::reinitialiserCouche(int index)
{
	if (0 < index && index < nbCouches)
		if (couches[i].etat != 0)
		{
			couches[i].vecteurDeForme.vider();
			
		}

	return false;

}

bool Canevas::activerCouche(int index)
{
	return true;
}

bool Canevas::desactiverCouche(int index)
{
	return true;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
	
	return true;
}

bool Canevas::retirerForme(int index)
{
	return true;
}

double Canevas::aire()
{
	return 0.0;
}

bool Canevas::translater(int deltaX, int deltaY)
{
	return true;
}

void Canevas::afficher(ostream & s)
{
}
