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
#include "Cochon.h"
#include "constants.h"
#include "econio.h"
#include "Affichage.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <conio.h>		/* clrscr */
#include <iostream>
#include <string>
#include <conio.h>
#include <unistd.h>
#include <typeinfo>

using namespace std;

int main() {
	srand (time(NULL));

	Monde monde;

	int var;

    afficherStructure();

	//Boucle d'ajout d'hommes
	for (var = 0; var < kNbHomme; var++) {
		Position pos = monde.creerPos();
		string nom = "Homer";
		int vitesse = 1;
		int age = 18;
		int espDeVie = rand()%30+60;
		int vision = 2;

		Element * hom = new Homme(pos, nom, &monde, vitesse, age, espDeVie, vision);
		monde.push_back(hom);
		monde.getCarteEdit().insert(pair <Position, unsigned> (pos, var) );

       placerElement(hom);
	}

    int iDejaFait = kNbHomme;

	// Boucle d'ajout de femmes
	for (var = iDejaFait; var < (iDejaFait+kNbFemme); var++) {
		Position pos = monde.creerPos();
		string nom = "Marge";
		int vitesse = 1;
		int age = 18;
		int espDeVie = rand()%30+60;
		int vision = 1;

		Element * fem = new Femme(pos, nom, &monde, vitesse, age, espDeVie, vision);
		monde.push_back(fem);
		monde.getCarteEdit().insert(pair <Position, unsigned> (pos, var ) );

		placerElement(fem);
	}

	iDejaFait += kNbFemme;


    // Boucle d'ajout de Cochons
	for (var = iDejaFait; var < (iDejaFait+kNbCochon); var++) {
		Position pos = monde.creerPos();
		string nom = "Spider Cochon";
		int vitesse = 1;
		int quantite = 1;
		int ptDeVie = 1;

		Element * coc = new Cochon(pos, nom, &monde, vitesse, quantite, ptDeVie);
		monde.push_back(coc);
		monde.getCarteEdit().insert(pair <Position, unsigned> (pos, var ) );

		placerElement(coc);
	}

    iDejaFait += kNbCochon;

	// Boucle d'ajout de Donuts
	for (var = iDejaFait; var < (iDejaFait+kNbDonuts); var++) {
		Position pos = monde.creerPos();
		string nom = "Donut";
		int quantite = 1;
		int ptDeVie = 1;

		Element * don = new Donut(pos, nom, &monde, quantite, ptDeVie);
		monde.push_back(don);
		monde.getCarteEdit().insert(pair <Position, unsigned> (pos, var ) );

		placerElement(don);
	}

    iDejaFait += kNbDonuts;

  //monde.afficher();
    refreshMap(monde); // Initialisation de l'affichage carte
  //   Boucle d'essai pour le déplacement
    // tant qu'il reste des hommes ou des femmes et des donuts ou des cochons
    while ((monde.getNombre(typeid(Homme)) > 0 || monde.getNombre(typeid(Femme)) > 0) && (monde.getNombre(typeid(Cochon)) > 0 || monde.getNombre(typeid(Donut)) > 0)) {
        int i=0;
        monde.addDay(); // Passage à un nouveau jour
        while (monde.at(i) != monde.back()) {
            Sleep(1); // Sleep Temps d'attente pour chaque refresh

            monde.at(i)->agir();

            refreshStats(monde); // Rafraichissement des stats
            if (monde.at(i) == monde.back()) break;
            i++;
        }
    }

    // Attente du joueur pour fermer l'app
    replacerCurs();
    cout << " Le jeu est termine !";
    getch();
    return 0;
}
