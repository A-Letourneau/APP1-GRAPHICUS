/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 28 novembre 2025
 * Description: Déclaration de la classe pour une couche dans un
 *    canevas. La classe Couche gère un vecteur de pointeurs de formes
 *    géométriques en accord avec les spécifications de Graphicus.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/


//A MODIFIER, LA FONCTION N'EST PAS BONNE

#ifndef COUCHE_H
#define COUCHE_H

#include "vecteur.h"

class Couche
{
	public:
		Couche();
		~Couche();
		bool ajouterForme(int formeNb);
		void reinitialiser();
		vecteur vecteurDeForme;
		int indexCouche;
		int etat;
		double aireTotale;

	// Classe à compléter
};

#endif
