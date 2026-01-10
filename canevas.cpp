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
		couches[i].changeEtat(INITIALISE);
	}
}

Canevas::~Canevas()
{

}

bool Canevas::reinitialiser()
{
	bool atleastOneDeletedFlag = false; 

	for (int i = 0; i < MAX_COUCHES; i++)
		if (couches[i].retourneEtat() != INITIALISE)
		{
			couches[i].vecteurDeForme.vider();
			couches[i].changeEtat(INITIALISE);
			atleastOneDeletedFlag = true;
		}

	return atleastOneDeletedFlag;
}

bool Canevas::reinitialiserCouche(int index)
{

	if (couches[index].retourneEtat() != INITIALISE && 0 < index && index < nbCouches)
	{
		couches[index].vecteurDeForme.vider();
		couches[index].changeEtat(INITIALISE);
		return true;
	}

	return false;
}

bool Canevas::activerCouche(int index)
{

	for (int i = 0; i < MAX_COUCHES; i++)
		if (couches[i].retourneEtat() == ACTIF)
			couches[i].changeEtat(INACTIF);
		

	if (0 < index && index < nbCouches)
	{
		couches[index].changeEtat(ACTIF);
		return true;
	}

	return false;
}

bool Canevas::desactiverCouche(int index)
{
	if (couches[index].retourneEtat() == ACTIF && 0 < index && index < nbCouches)
	{
		couches[index].changeEtat(INACTIF);
		return true;
	}
	return true;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
	for (int i = 0; i < MAX_COUCHES; i++)
		if (couches[i].retourneEtat() == ACTIF)
			//Couche.h s'occupe de ca
	return true;
}

bool Canevas::retirerForme(int index)
{
	for (int i = 0; i < MAX_COUCHES; i++)
		if (couches[i].retourneEtat() == ACTIF)
			//Couche.h s'occupe de ca
	return true;
}

double Canevas::aire()
{
	//Couche.h s'occupe de ca
	return 0.0;
}

bool Canevas::translater(int deltaX, int deltaY)
{	
	//Couche.h s'occupe de ca
	return true;
}

void Canevas::afficher(ostream & s)
{
}
