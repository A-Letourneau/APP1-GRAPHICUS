#include "vecteur.h"

// Constructeur
vecteur::vecteur()
{
    m_capacite = 1;
    m_taille = 0;
    m_donnees = new Forme * [m_capacite];
}

// Destructeur
vecteur::~vecteur()
{
    delete[] m_donnees;
}

// Double la capacité du vecteur
void vecteur::doublerCapacite()
{
    Forme** nouveauTableau = new Forme * [m_capacite * 2];

    for (int i = 0; i < m_taille; ++i)
    {
        nouveauTableau[i] = m_donnees[i];
    }

    delete[] m_donnees;
    m_donnees = nouveauTableau;
}

// Retourne la capacité
int vecteur::capacite() const
{
    return m_capacite;
}

// Retourne la taille
int vecteur::taille() const
{
    return m_taille;
}

// Ajoute une forme au vecteur
void vecteur::ajouter(Forme* forme)
{
    if (m_taille == m_capacite)
    {
        doublerCapacite();
    }

    m_donnees[m_taille] = forme;
    m_taille = m_taille + 1;
}

// Retourne un élément à un index donné
Forme* vecteur::obtenir(int index) const
{
    if (index < 0 || index >= m_taille)
    {
        return nullptr;
    }

    return m_donnees[index];
}

// Vide le vecteur
void vecteur::vider()
{
    for (int i = 0; i < m_taille; ++i)
    {
        m_donnees[i] = 0;
    }
    m_taille = 0;
}
