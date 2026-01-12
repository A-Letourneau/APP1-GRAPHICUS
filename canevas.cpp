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
			couches[i].reinitialiser();
			couches[i].changeEtat(INITIALISE);
			atleastOneDeletedFlag = true;
		}

	return atleastOneDeletedFlag;
}

bool Canevas::reinitialiserCouche(int index)
{

	if (couches[index].retourneEtat() != INITIALISE && 0 <= index && index < MAX_COUCHES)
	{
		couches[index].reinitialiser();
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
		

	if (0 <= index && index < MAX_COUCHES && couches[index].retourneEtat() != ACTIF)
	{
		couches[index].changeEtat(ACTIF);
		return true;
	}

	return false;
}

bool Canevas::desactiverCouche(int index)
{
	if (couches[index].retourneEtat() == ACTIF && 0 <= index && index < MAX_COUCHES)
	{
		couches[index].changeEtat(INACTIF);
		return true;
	}
	return true;
}

bool Canevas::ajouterFormeCouche(Forme *p_forme)
{
	for (int i = 0; i < MAX_COUCHES; i++)
		if (couches[i].retourneEtat() == ACTIF)
		{
			couches[i].ajouterForme(p_forme);
			return true;
		}	

	return false;
}

bool Canevas::retirerForme(int index)
{
	for (int i = 0; i < MAX_COUCHES; i++)
		if (couches[i].retourneEtat() == ACTIF)
		{
			return couches[i].enleverForme(index);
		}	
	return false;
}

double Canevas::aire()
{
	double aireCaneva = 0;

	for (int i = 0; i < MAX_COUCHES; i++)
	{
		aireCaneva += couches[i].aireTotale;
	}
	
	return aireCaneva;
}

bool Canevas::translater(int deltaX, int deltaY)
{	
	bool atleastOneTranslated = false;
	for (int i = 0; i < MAX_COUCHES; i++)
		if (couches[i].retourneEtat() == ACTIF)
		{
			couches[i].translater(deltaX,deltaY);
			atleastOneTranslated = true;
		}
	return atleastOneTranslated;
}

void Canevas::afficher(ostream & s)
{
	for (int i = 0; i < MAX_COUCHES; i++)
	{
		s << "---- Couche " << i << " ----" << endl;
		couches[i].afficher(s);	
	}
	s << endl;
	
	
}
