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

#define INITIALISE 0
#define INACTIF 1
#define ACTIF 2
#define NB_ETAT 3

class Couche
{
	public:
		Couche();
		~Couche();
		bool ajouterForme(Forme *p_forme);
		void reinitialiser();
		void changeEtat(int nouvelleEtat);
		int retourneEtat();
		vecteur vecteurDeForme;

		int indexCouche;
		int etat;
		double aireTotale;

	// Classe à compléter
};

#endif
