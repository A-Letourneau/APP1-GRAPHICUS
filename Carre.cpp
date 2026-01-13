/********
 * Fichier: Carre.cpp
 * Auteurs: Noémie Boisjoly et Alexis Létourneau
 * Date: 13 janvier 2026
 * Description: Implémentation des méthodes des classes décrites dans
 *    Carre.h. 
 *
********/

#include "Carre.h"

Carre::Carre(int x, int y, int c)
{
    cote = abs(c);
	ancrage.x = x;
	ancrage.y = y;
	aire();
}
Carre::~Carre()
{

}

double Carre::aire()
{
	aireCarre = cote*cote;
	return aireCarre;
}

void Carre::afficher(ostream& s)
{
	s << "Carre(x=" << ancrage.x << ",y="<< ancrage.y << ",c=" << cote << ",aire=" << aireCarre << ")"  << endl;
}

//Faire une methode pour modifier
void Carre::modifierCote(int c){
	cote = c;
	aire();
}

void Carre::modifierX(int x){
	ancrage.x = x;
}
void Carre::modifierY(int y){
	ancrage.y = y;
}

//Faire une methode pour lire
int Carre::lireCote() const{
	return cote;
}

int Carre::lireX() const{
	return ancrage.x;
}

int Carre::lireY() const{
	return ancrage.y;
}