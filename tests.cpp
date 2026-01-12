/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 28 novembre 2025
 * Description: Implémentation des méthodes des classes décrites dans
 *    tests.h.  Ce fichier peut être adapté à vos besoins de tests.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"

void Tests::tests_unitaires_formes()
{
	// Tests des formes géométriques
}

void Tests::tests_unitaires_vecteur()
{
	// Tests de la classe Vecteur
}

void Tests::tests_unitaires_couche()
{
	// Tests de la classe Couche
}

void Tests::tests_unitaires_canevas()
{
	// Tests de la classe Canevas
}

void Tests::tests_unitaires()
{
	// Faire tous les tests unitaires
	tests_unitaires_formes();
	tests_unitaires_vecteur();
	tests_unitaires_couche();
	tests_unitaires_canevas();
}

void Tests::tests_application()
{
	// Faire tous les tests applicatifs
	tests_application_cas_01();
	tests_application_cas_02();
}

void Tests::tests_application_cas_01()
{
	cout << "TESTS APPLICATION (CAS 01)" << endl;
	// Il faut ajouter les opérations réalisant ce scénario de test.
}

void Tests::tests_application_cas_02()
{
	cout << "TESTS APPLICATION (CAS 02)" << endl;
	// Il faut ajouter les opérations realisant ce scénario de test.
}

void Tests::tests_validation()
{
    Canevas tableauDeCouche;

    //Partie 1
    cout << endl << "PARTIE 1" << endl << endl;
    //1. Activer la couche 2 et ajouter les trois formes suivantes en respectant les points d’ancrages et les dimensions :
    cout << "Activer la couche 2 avec tableauDeCouche.activerCouche(2)" << endl;
    tableauDeCouche.activerCouche(2);
    //— un cercle (x=0, y=0, rayon=5)
    cout << "Ajout d'un cercle avec tableauDeCouche.ajouterFormeCouche()" << endl;
    Cercle* c1 = new Cercle(0,0,5);
    cout << tableauDeCouche.ajouterFormeCouche(c1) << endl;
    //— un carré (x=4, y=1, côté=6)
    cout << "Ajout d'un carre avec tableauDeCouche.ajouterFormeCouche()" << endl;
    Carre* car1 = new Carre(4,1,6);
    cout << tableauDeCouche.ajouterFormeCouche(car1) << endl;
    //— un rectangle (x=2, y=8, largeur=3, hauteur=9)
    cout << "Ajout d'un Rectangle avec tableauDeCouche.ajouterFormeCouche()" << endl;
    Rectangle* r1 = new Rectangle(2,8,3,9);
    cout << tableauDeCouche.ajouterFormeCouche(r1) << endl;
    //2. Activer la couche 1 et ajouter la forme suivante :
    cout << "Activer la couche 1 avec tableauDeCouche.activerCouche(1)" << endl;
    tableauDeCouche.activerCouche(1);
    //— un rectangle (x=0, y=0, largeur=4, hauteur=2)
    cout << "Ajout d'un Rectangle avec tableauDeCouche.ajouterFormeCouche()" << endl;
    Rectangle* r2 = new Rectangle(0,0,4,2);
    cout << tableauDeCouche.ajouterFormeCouche(r2) << endl;
    //3. Afficher le canevas.
    cout << "Affichage du tableau avec tableauDeCouche.afficher(cout)" << endl;
    tableauDeCouche.afficher(cout);
    //4. Afficher l’aire du canevas.
    cout << "Affichage de l'aire avec tableauDeCouche.aire()" << endl;
    cout << "Aire du caneva : " << tableauDeCouche.aire() << endl << endl;

    //Partie 2
    cout << endl << "PARTIE 2" << endl << endl;
    //5. Activer la couche 0 et ajouter les quatre formes suivantes en respectant les points d’ancrages et les dimensions :
    cout << "Activer la couche 0 avec tableauDeCouche.activerCouche(0)" << endl;
    tableauDeCouche.activerCouche(0);
    //— un rectangle (x=0, y=0, largeur=1, hauteur=1)
    cout << "Ajout d'un Rectangle avec tableauDeCouche.ajouterFormeCouche()" << endl;
    Rectangle* r3 = new Rectangle(0,0,1,1);
    cout << tableauDeCouche.ajouterFormeCouche(r3) << endl;
    //— un carré (x=-1, y=-3, côté=1)
    cout << "Ajout d'un Carre avec tableauDeCouche.ajouterFormeCouche()" << endl;
    Carre* car2 = new Carre(-1,-3,1);
    cout << tableauDeCouche.ajouterFormeCouche(car2) << endl;
    //— un cercle (x=0, y=0, rayon=2)
    cout << "Ajout d'un Cercle avec tableauDeCouche.ajouterFormeCouche()" << endl;
    Cercle* c2 = new Cercle(0,0,2);
    cout << tableauDeCouche.ajouterFormeCouche(c2) << endl;
    //6. Activer la couche 2 et lui appliquer une translation (x=4 y=3).
    cout << "Activer la couche 2 avec tableauDeCouche.activerCouche(2)" << endl;
    tableauDeCouche.activerCouche(2);
    cout << "translater les formes dans la couche active avec tableauDeCouche.translater()" << endl;
    tableauDeCouche.translater(4,3);
    //7. Afficher le canevas.
    cout << "Affichage du tableau avec tableauDeCouche.afficher(cout)" << endl;
    tableauDeCouche.afficher(cout);
    //8. Afficher l’aire du canevas.
    cout << "Affichage de l'aire avec tableauDeCouche.aire()" << endl;
    cout << "Aire du caneva : " << tableauDeCouche.aire() << endl << endl;


    //Partie 3
    cout << endl << "PARTIE 3" << endl << endl;
    //9. Activer la couche 0 et retirer la deuxième forme de la couche.
    cout << "Activer la couche 0 avec tableauDeCouche.activerCouche(0)" << endl;
    cout << tableauDeCouche.activerCouche(0) << endl;
    cout << "retire la deuxieme forme (index 1) avec  tableauDeCouche.retirerForme(1);" << endl;
    tableauDeCouche.retirerForme(1);
    //10. Activer la couche 0 et retirer la première forme de la couche.
    cout << "Activer la couche 0 avec tableauDeCouche.activerCouche(0)" << endl;
    cout << tableauDeCouche.activerCouche(0) << endl;
    cout << "retire la premiere forme (index 0) avec tableauDeCouche.retirerForme(0);" << endl;
    tableauDeCouche.retirerForme(0);
    //11. Activer la couche 2 et réinitialiser la couche.
    cout << "Activer la couche 2 avec tableauDeCouche.activerCouche(2)" << endl;
    tableauDeCouche.activerCouche(2);
    cout << "Reinitialiser la couche 2 avec tableauDeCouche.reinitialiserCouche(2)" << endl;
    tableauDeCouche.reinitialiserCouche(2);
    //12. Afficher le canevas.
    cout << "Affichage du tableau avec tableauDeCouche.afficher(cout)" << endl;
    tableauDeCouche.afficher(cout);
    //13. Afficher l’aire du canevas.
    cout << "Affichage de l'aire avec tableauDeCouche.aire()" << endl;
    cout << "Aire du caneva : " << tableauDeCouche.aire() << endl << endl;


    //Partie 4
    cout << endl << "PARTIE 4" << endl << endl;
    //14. Réinitialiser le canevas.
    cout << "Reinitialiser le tableau avec  tableauDeCouche.reinitialiser()" << endl;
    tableauDeCouche.reinitialiser();
    //15. Afficher le canevas.
    cout << "Affichage du tableau avec tableauDeCouche.afficher(cout)" << endl;
    tableauDeCouche.afficher(cout);
    //16. Afficher l’aire du canevas.
    cout << "Affichage de l'aire avec tableauDeCouche.aire()" << endl;
    cout << "Aire du caneva : " << tableauDeCouche.aire() << endl << endl;
}
