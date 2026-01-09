#ifndef VECTEUR_H
#define VECTEUR_H

// Déclaration anticipée
class Forme;

class vecteur
{
private:
    Forme** m_donnees;
    int m_capacite;
    int m_taille;

    // Double la capacité du vecteur
    void doublerCapacite();

public:
    // Constructeur et destructeur
    vecteur();
    ~vecteur();

    // Accesseurs
    int capacite() const;
    int taille() const;

    // Gestion des éléments
    void ajouter(Forme* f);
    Forme* obtenir(int index) const;

    // Vide le vecteur
    void vider();
};

#endif
