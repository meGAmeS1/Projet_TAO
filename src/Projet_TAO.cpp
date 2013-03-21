//============================================================================
// Name        : Projet_TAO.cpp
// Author      : Le-Moal/Maginot/Revilliod
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
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

	//int var;

//	// Boucle d'ajout d'hommes
//	for (var = 0; var < 5; var++) {
//		Position pos = monde.creerPos();
//		string nom = "Homer";
//		int vitesse = 1;
//		int age = 18;
//		int espDeVie = 70;
//		int vision = 2;
//
//		Homme * hom = new Homme(pos, nom, vitesse, age, espDeVie, vision);
//		monde.push_back(hom);
//		monde.getCarteEdit().insert(pair <Position, unsigned> (pos, var ) );
//	}
//
//	// Boucle d'ajout de femmes
//	for (var = 5; var < 10; var++) {
//		Position pos = monde.creerPos();
//		string nom = "Marge";
//		int vitesse = 1;
//		int age = 18;
//		int espDeVie = 70;
//		int vision = 1;
//
//		Femme * fem = new Femme(pos, nom, vitesse, age, espDeVie, vision);
//		monde.push_back(fem);
//		monde.getCarteEdit().insert(pair <Position, unsigned> (pos, var ) );
//	}
//
//	// Boucle d'ajout d'enfants
//	for (var = 10; var < 15; var++) {
//		Position pos = monde.creerPos();
//		string nom = "Maggie";
//		int vitesse = 1;
//		int age = 0;
//		int espDeVie = 70;
//		int vision = 1;
//
//		Enfant * enf = new Enfant(pos, nom, vitesse, age, espDeVie, vision);
//		monde.push_back(enf);
//		monde.getCarteEdit().insert(pair <Position, unsigned> (pos, var ) );
//	}
//
//	// Boucle d'ajout de Donuts
//	for (var = 15; var < 20; var++) {
//		Position pos = monde.creerPos();
//		string nom = "Donut";
//		int quantite = 1;
//		int ptDeVie = 1;
//
//		Donut * don = new Donut(pos, nom, quantite, ptDeVie);
//		monde.push_back(don);
//		monde.getCarteEdit().insert(pair <Position, unsigned> (pos, var ) );
//	}
//
//
//	monde.afficher();

	Position unePos = monde.creerPos();
	Homme * unH = new Homme (unePos, "Homer cree", 1, 10, 20, 1);
	monde.push_back(unH);
	monde.getCarteEdit().insert(pair <Position, unsigned> (unePos, 20));
	cout<<"\n______________ monde avec nouveau homer ___________________";
	monde.afficher();

	unH->seDeplacer(NORDEST);

	cout<<"\n______________ monde avec nouveau homer qui s'est deplace au nord-est (x+1;y+1)________________";
	monde.afficher();

	return 0;
}
