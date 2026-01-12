main: main.o tests.o canevas.o couche.o vecteur.o forme.o Rectangle.o Carre.o Cercle.o
	g++ -o main main.o tests.o canevas.o couche.o vecteur.o forme.o Rectangle.o Carre.o Cercle.o
main.o: main.cpp tests.h canevas.h couche.h vecteur.h forme.h
	g++ main.cpp -g -c
test.o: tests.cpp tests.h canevas.h couche.h vecteur.h forme.h
	g++ tests.cpp -g -c
caneva.o: canevas.cpp canevas.h couche.h vecteur.h forme.h
	g++ canevas.cpp -g -c
couche.o: couche.cpp couche.h vecteur.h forme.h
	g++ couche.cpp -g -c
vecteur.o: vecteur.cpp vecteur.h forme.h
	g++ vecteur.cpp -g -c
Rectangle.o: Rectangle.cpp Rectangle.h forme.h
	g++ Rectangle.cpp -g -c
Carre.o: Carre.cpp Carre.h forme.h
	g++ Carre.cpp -g -c
Cercle.o: Cercle.cpp Cercle.h forme.h
	g++ Cercle.cpp -g -c
forme.o: forme.cpp forme.h coordonnee.h
	g++ forme.cpp -g -c
