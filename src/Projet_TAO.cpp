//============================================================================
// Name        : Projet_TAO.cpp
// Author      : Le-Moal/Maginot/Revilliod
// Version     :
// Copyright   : Your copyright notice
// Description : Jeu de la vie
//============================================================================

#include "Monde.h"
#include "Enfant.h"
#include "Femme.h"
#include "Homme.h"
#include "Donut.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <conio.h>		/* clrscr */
#include <iostream>
#include <string>

using namespace std;

int main() {
	srand (time(NULL));

	Monde monde;

	int var;

	// Boucle d'ajout d'hommes
	for (var = 0; var < 5; var++) {
		Position pos = monde.creerPos();
		string nom = "Homer";
		int vitesse = 1;
		int age = 18;
		int espDeVie = 70;
		int vision = 2;

		Homme * hom = new Homme(pos, nom, &monde, vitesse, age, espDeVie, vision);
		monde.push_back(hom);
		monde.getCarteEdit().insert(pair <Position, unsigned> (pos, var ) );
	}

	// Boucle d'ajout de femmes
	for (var = 5; var < 10; var++) {
		Position pos = monde.creerPos();
		string nom = "Marge";
		int vitesse = 1;
		int age = 18;
		int espDeVie = 70;
		int vision = 1;

		Femme * fem = new Femme(pos, nom, &monde, vitesse, age, espDeVie, vision);
		monde.push_back(fem);
		monde.getCarteEdit().insert(pair <Position, unsigned> (pos, var ) );
	}

	// Boucle d'ajout d'enfants
	for (var = 10; var < 15; var++) {
		Position pos = monde.creerPos();
		string nom = "Maggie";
		int vitesse = 1;
		int age = 0;
		int espDeVie = 70;
		int vision = 1;

		Enfant * enf = new Enfant(pos, nom, &monde, vitesse, age, espDeVie, vision);
		monde.push_back(enf);
		monde.getCarteEdit().insert(pair <Position, unsigned> (pos, var ) );
	}

	// Boucle d'ajout de Donuts
	for (var = 15; var < 20; var++) {
		Position pos = monde.creerPos();
		string nom = "Donut";
		int quantite = 1;
		int ptDeVie = 1;

		Donut * don = new Donut(pos, nom, &monde, quantite, ptDeVie);
		monde.push_back(don);
		monde.getCarteEdit().insert(pair <Position, unsigned> (pos, var ) );
	}


	monde.afficher();

    for (var=0; var<20;var++){
        monde.at(var)->agir();
    }

    cout<<"Apres déplacement"<<endl;
    monde.afficher();

	return 0;
}
