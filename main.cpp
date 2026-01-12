#include "Cercle.h"
#include "Carre.h"
#include "Rectangle.h"
#include "vecteur.h"
#include "canevas.h"

using namespace std;

int main()
{
    Canevas tableauDeCouche;
    
    //1. Activer la couche 2 et ajouter les trois formes suivantes en respectant les points d’ancrages et les dimensions :
    tableauDeCouche.activerCouche(2);
    //— un cercle (x=0, y=0, rayon=5)
    Cercle* c1 = new Cercle(0,0,5);
    cout << endl << tableauDeCouche.ajouterFormeCouche(c1) << endl;
    //— un carré (x=4, y=1, côté=6)
    Carre* car1 = new Carre(4,1,6);
    cout << endl << tableauDeCouche.ajouterFormeCouche(car1) << endl;
    //— un rectangle (x=2, y=8, largeur=3, hauteur=9)
    Rectangle* r1 = new Rectangle(2,8,3,9);
    cout << endl << tableauDeCouche.ajouterFormeCouche(r1) << endl;   
    //2. Activer la couche 1 et ajouter la forme suivante :
    tableauDeCouche.activerCouche(1);
    //— un rectangle (x=0, y=0, largeur=4, hauteur=2)
    Rectangle* r2 = new Rectangle(0,0,4,2);
    cout << endl << tableauDeCouche.ajouterFormeCouche(r2) << endl;  
    //3. Afficher le canevas.
    tableauDeCouche.afficher(cout);
    //4. Afficher l’aire du canevas.
    cout << "Aire du caneva : " << tableauDeCouche.aire() << endl;





    /*tableauDeCouche.afficher(cout);
    cout << endl << tableauDeCouche.activerCouche(2) << endl;
    Cercle* c1 = new Cercle(1,2,3);
    cout << endl << tableauDeCouche.ajouterFormeCouche(c1) << endl;
    tableauDeCouche.afficher(cout);
    cout << endl << tableauDeCouche.translater(5,5) << endl;
    tableauDeCouche.afficher(cout);*/

    /*
    tableauDeCouche.afficher(cout);
    cout << endl << tableauDeCouche.activerCouche(2) << endl;
    tableauDeCouche.afficher(cout);
    Cercle* c1 = new Cercle(1,2,3);
    Cercle* c2 = new Cercle(4,5,6);
    Cercle* c3 = new Cercle(7,8,9);
    cout << endl << tableauDeCouche.ajouterFormeCouche(c1) << endl;
    cout << endl << tableauDeCouche.ajouterFormeCouche(c2) << endl;
    cout << endl << tableauDeCouche.ajouterFormeCouche(c3) << endl;
    tableauDeCouche.afficher(cout);
    cout << endl << tableauDeCouche.aire() << endl;
    cout << endl << tableauDeCouche.retirerForme(1) << endl;
    tableauDeCouche.afficher(cout);
    cout << endl << tableauDeCouche.reinitialiser() << endl;
    tableauDeCouche.afficher(cout);
    cout << endl << tableauDeCouche.aire() << endl;*/
/*  
    std::cout << "Capacite initiale : " << v.capacite() << std::endl;
    std::cout << "Taille initiale   : " << v.taille() << std::endl;

    // Création de formes
    Cercle* c1 = new Cercle(1,2,3);
    Cercle* c2 = new Cercle(4,5,6);
    Cercle* c3 = new Cercle(7,8,9);

    // Ajout des formes
    v.ajouter(c1);
    v.ajouter(c2);
    v.ajouter(c3);

    c2->afficher(cout);

    std::cout << "Capacite initiale : " << v.capacite() << std::endl;
    std::cout << "Taille initiale   : " << v.taille() << std::endl;

	cout << "end" << endl;*/
	return 0;
}