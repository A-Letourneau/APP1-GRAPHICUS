/********
 * Fichier: couche.h
 * Auteurs: Noémie Boisjoly et Alexis Létourneau
 * Date: 13 janvier 2026
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
		bool enleverForme(int index);
		
		void changeEtat(int nouvelleEtat);
		void changeIndex(int index);
		int  retourneEtat();
		double retourneAireTotale();
		void afficher(ostream & s);

		bool translater(int x, int y);

		void reinitialiser();

		vecteur vecteurDeForme;

	private:
		int indexCouche;
		int etat = INITIALISE;
		double aireTotale = 0;

	// Classe à compléter
};

#endif
