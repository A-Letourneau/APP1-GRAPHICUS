#include "Cercle.h"
#include "vecteur.h"


using namespace std;

int main()
{
    vecteur v;

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

	cout << "end" << endl;
	return 0;
}