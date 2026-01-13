/********
 * Fichier: Cercle.cpp
 * Auteurs: Noémie Boisjoly et Alexis Létourneau
 * Date: 13 janvier 2026
 * Description: Implémentation des méthodes des classes décrites dans
 *    Cercle.h. 
 *
********/

#include "Cercle.h"

Cercle::Cercle(int x, int y, int r)
{
	rayon = abs(r);
	ancrage.x = x;
	ancrage.y = y;
	aire();
}
Cercle::~Cercle()
{

}

double Cercle::aire()
{
	aireCercle = rayon * rayon * 3.14159;
	return aireCercle;
}

void Cercle::afficher(ostream& s)
{
	s << "Cercle(x=" << ancrage.x << ",y="<< ancrage.y << ",r=" << rayon << ",aire="<< aireCercle << ")" << endl;
}

void Cercle::modifierRayon(int c){
	rayon = c;
	aire();
}

void Cercle::modifierX(int x){
	ancrage.x = x;
}
void Cercle::modifierY(int y){
	ancrage.y = y;
}

//Faire une methode pour lire
int Cercle::lireRayon() const{
	return rayon;
}

int Cercle::lireX() const{
	return ancrage.x;
}

int Cercle::lireY() const{
	return ancrage.y;
}
