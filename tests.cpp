/********
 * Fichier: tests.cpp
 * Auteurs: Noémie Boisjoly et Alexis Létourneau
 * Date: 13 janvier 2026
 * Description: Implémentation des méthodes des classes décrites dans
 *    tests.h.  
 *
********/

#include "tests.h"

void Tests::tests_unitaires_formes()
{
    cout << "Objet Cercle" << endl;
	Cercle* cTest = new Cercle(1,1,1);
    cTest->afficher(cout);
	Cercle* cTest2 = new Cercle(-1,-1,-1);
    cTest2->afficher(cout);

    cout << "Objet Rectangle" << endl;
	Rectangle* rTest = new Rectangle(1,1,1,1);
    rTest->afficher(cout);
	Rectangle* rTest2 = new Rectangle(1,1,-1,-1);
    rTest2->afficher(cout);

    cout << "Objet Carre" << endl;
	Carre* carTest = new Carre(1,1,1);
    carTest->afficher(cout);
	Carre* carTest2 = new Carre(-1,-1,-1);
    carTest2->afficher(cout);

    cout << endl << "Translation d'un objet cercle au coordonnee (5,5) a 4 en x et 3 en y" << endl;
    cout << "Avant" << endl;
    Cercle* cTest3 = new Cercle(5,5,5);
    cTest3->afficher(cout);
    cTest3->modifierX(4);
    cTest3->modifierY(3);
    cout << "Apres" << endl;
    cTest3->afficher(cout);
    
    cout << endl << "Changement du rayon d'un objet carre au rayon de 4 a 10" << endl;
    cout << "Avant" << endl;
    Carre* carTest3 = new Carre(0,0,4);
    carTest3->afficher(cout);
    carTest3->modifierCote(10);
    cout << "Apres" << endl;
    carTest3->afficher(cout);


}

void Tests::tests_unitaires_vecteur()
{
	vecteur vTest;
	Cercle* cTest = new Cercle(1,1,1);
	Rectangle* rTest = new Rectangle(1,1,1,1);
	Carre* carTest = new Carre(1,1,1);

    cout << "Taille du vecteur : " << vTest.taille() << ", Capacite du vecteur : " << vTest.capacite() << endl;
    vTest.ajouter(cTest);
    cout << "Ajout du pointeur d'objet : ";
    vTest.obtenir(0)->afficher(cout);
    cout << "Taille du vecteur : " << vTest.taille() << ", Capacite du vecteur : " << vTest.capacite() << endl;
    vTest.ajouter(rTest);
    cout << "Ajout du pointeur d'objet : ";
    vTest.obtenir(1)->afficher(cout);
    cout << "Taille du vecteur : " << vTest.taille() << ", Capacite du vecteur : " << vTest.capacite() << endl;
    vTest.ajouter(carTest);  
    cout << "Ajout du pointeur d'objet : ";
    vTest.obtenir(2)->afficher(cout);
    cout << "Taille du vecteur : " << vTest.taille() << ", Capacite du vecteur : " << vTest.capacite() << endl;
}

void Tests::tests_unitaires_couche()
{
	Couche coucheTest;
	Cercle* cTest = new Cercle(1,1,1);
	Rectangle* rTest = new Rectangle(1,1,1,1);
	Carre* carTest = new Carre(1,1,1);

    cout << "Etat inital de la couche (INITIALISE = 0, INACTIF = 1, ACTIF = 2) : "<< coucheTest.retourneEtat();
    coucheTest.changeEtat(1);
    cout << "Changement de l'etat de la couche (INITIALISE = 0, INACTIF = 1, ACTIF = 2) : "<< coucheTest.retourneEtat();
    coucheTest.changeEtat(2);
    cout << "Changement de l'etat de la couche (INITIALISE = 0, INACTIF = 1, ACTIF = 2) : "<< coucheTest.retourneEtat();
    cout << "Ajout d'une forme" << endl;
    coucheTest.ajouterForme(cTest);
    coucheTest.afficher(cout);
    cout << "Ajout d'une forme" << endl;
    coucheTest.ajouterForme(rTest);
    coucheTest.afficher(cout);
    cout << "Ajout d'une forme" << endl;
    coucheTest.ajouterForme(carTest);
    coucheTest.afficher(cout);

    coucheTest.enleverForme(50);
    coucheTest.afficher(cout);
    cout << endl << "Retrait d'une forme a l'index 50 (Rien ne devrait etre enleve)" << endl;
    coucheTest.enleverForme(2);
    coucheTest.afficher(cout);
    cout << "Retrait d'une forme a l'index 2" << endl;
    coucheTest.enleverForme(1);
    coucheTest.afficher(cout);
    cout << "Retrait d'une forme a l'index 1" << endl;
    coucheTest.enleverForme(0);
    coucheTest.afficher(cout);
    cout << "Retrait d'une forme a l'index 0" << endl;

    cout << "Ajout de 3 formes" << endl;
    coucheTest.ajouterForme(cTest);
    coucheTest.ajouterForme(rTest);
    coucheTest.ajouterForme(carTest);
    coucheTest.afficher(cout);
    cout << "Reinitialisation de la couche" << endl;
    coucheTest.reinitialiser();
    coucheTest.afficher(cout);
}

void Tests::tests_unitaires_canevas()
{
	Canevas canevaTest;
	Cercle* cTest = new Cercle(1,1,1);
	Rectangle* rTest = new Rectangle(1,1,1,1);
	Carre* carTest = new Carre(1,1,1);

    cout << "Etat inital du caneva : " << endl;
    canevaTest.afficher(cout); 
    cout << "Choix d'une couche active (3) : " << endl;
    canevaTest.activerCouche(3);
    canevaTest.afficher(cout); 


    cout << "Ajout d'une forme" << endl;
    canevaTest.ajouterFormeCouche(cTest);
    canevaTest.afficher(cout);
    cout << "Ajout d'une forme" << endl;
    canevaTest.ajouterFormeCouche(rTest);
    canevaTest.afficher(cout);
    cout << "Ajout d'une forme" << endl;
    canevaTest.ajouterFormeCouche(carTest);
    canevaTest.afficher(cout);


    canevaTest.retirerForme(50);
    canevaTest.afficher(cout);
    cout << endl << "Retrait d'une forme a l'index 50 (Rien ne devrait etre enleve)" << endl;
    canevaTest.retirerForme(2);
    canevaTest.afficher(cout);
    cout << "Retrait d'une forme a l'index 2" << endl;
    canevaTest.retirerForme(1);
    canevaTest.afficher(cout);
    cout << "Retrait d'une forme a l'index 1" << endl;
    canevaTest.retirerForme(0);
    canevaTest.afficher(cout);
    cout << "Retrait d'une forme a l'index 0" << endl;

    cout << endl << "Ajout de 3 formes" << endl;
    canevaTest.ajouterFormeCouche(cTest);
    canevaTest.ajouterFormeCouche(rTest);
    canevaTest.ajouterFormeCouche(carTest);
    canevaTest.afficher(cout);
    cout << "Selection de la couche 0 et ajout de 3 formes" << endl;
    canevaTest.activerCouche(0);
    canevaTest.ajouterFormeCouche(cTest);
    canevaTest.ajouterFormeCouche(rTest);
    canevaTest.ajouterFormeCouche(carTest);
    canevaTest.afficher(cout);
    cout << "Reinitialisation de la couche 3" << endl;
    canevaTest.reinitialiserCouche(3);
    canevaTest.afficher(cout);
    cout << "Reinitialisation du Caneva" << endl;
    canevaTest.reinitialiser();
    canevaTest.afficher(cout);
}

void Tests::tests_unitaires()
{
	// Faire tous les tests unitaires
	tests_unitaires_formes();
	tests_unitaires_vecteur();
	tests_unitaires_couche();
	tests_unitaires_canevas();
}

