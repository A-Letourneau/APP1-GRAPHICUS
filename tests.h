/********
 * Fichier: tests.h
 * Auteurs: Noémie Boisjoly et Alexis Létourneau
 * Date: 13 janvier 2026
 * Description: Déclaration de la classe pour les tests de Graphicus.
********/

#ifndef TESTS_H
#define TESTS_H

#include <iostream>
#include "canevas.h"
#include "Cercle.h"
#include "Carre.h"
#include "Rectangle.h"

using namespace std;

class Tests
{
public:
	// Méthodes pour les tests unitaires des classes
	void tests_unitaires_formes();
	void tests_unitaires_vecteur();
	void tests_unitaires_couche();
	void tests_unitaires_canevas();
	void tests_unitaires(); // Appel de tous les tests unitaires
};

#endif
