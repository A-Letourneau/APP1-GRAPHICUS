/********
 * Fichier: couche.cpp
 * Auteurs: Noémie Boisjoly et Alexis Létourneau
 * Date: 13 janvier 2026
 * Description: Implémentation d'une couche pour contenir et gérer des pointeurs de formes.
********/

#include "couche.h"

Couche::Couche()
{

}


Couche::~Couche()
{

}

bool Couche::ajouterForme(Forme *p_forme)
{
    vecteurDeForme.ajouter(p_forme);
    aireTotale += p_forme->aire();
    return true;
}

bool Couche::enleverForme(int index)
{
    if (0 <= index && index < vecteurDeForme.taille())
        aireTotale -= vecteurDeForme.obtenir(index)->aire();
        vecteurDeForme.enlever(index);
        return true;    
    return false;
}

bool Couche::translater(int x, int y)
{
    Coordonnee coor;
    for (int i = 0; i < vecteurDeForme.taille(); i++)
    {
        coor = vecteurDeForme.obtenir(i)->getAncrage();
        coor.x += x;
        coor.y += y;
        vecteurDeForme.obtenir(i)->setAncrage(coor);
    }
    return true;
}

void Couche::changeEtat(int nouvelleEtat)
{
    if (0 <= etat && etat < NB_ETAT)
        etat = nouvelleEtat;
}

void Couche::changeIndex(int index)
{
    if (0 <= etat)
        indexCouche = index;
}

int Couche::retourneEtat()
{
    return etat;
}

double Couche::retourneAireTotale()
{
    return aireTotale;
}

void Couche::afficher(ostream &s)
{
    int cpt = 0;

    if (etat == INITIALISE)
        s << "Etat : INITIALISE" << endl;
    else if (etat == INACTIF)
        s << "Etat : INACTIF" << endl;
    else if (etat == ACTIF)
        s << "Etat : ACTIF" << endl;

    while(vecteurDeForme.obtenir(cpt) != nullptr)
    {
        vecteurDeForme.obtenir(cpt)->afficher(s);
        cpt += 1;
    }
    s << "Aire totale de la couche : " << aireTotale << endl;
    
}


void Couche::reinitialiser()
{
    vecteurDeForme.vider();
    aireTotale = 0;
}


