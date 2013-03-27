/*
 * Humain.cpp
 *
 *  Created on: 11 mars 2013
 *      Author: Quentin Maginot
 */

#include "Humain.h"
#include "Monde.h"
#include "Position.h"
#include "typeinfo"
#include <stdlib.h>     /* srand, rand */

using namespace std;

/** Constructeur par défaut**/
Humain::Humain() {}

/** Constructeur paramétré**/
Humain::Humain(const Position _pos, const string _n, Monde* _e, int _vit, int _a, int _edv, int _vis):
    Mobile(_pos, _n, _e, _vit),age(_a),
    esperanceDeVie(_edv),
    vision(_vis)
{}

/** Getter getAge **/
/** permet de récupérer l'âge de l'humain
**/
int Humain::getAge() const {
	return age;
}

/** Setter setAge **/
/** met à jour l'âge de l'humain
**/
void Humain::setAge(int age) {
	this->age = age;
}

/** Getter getVision **/
/** permet de récupérer la vision de l'humain
**/
int Humain::getVision() const {
	return vision;
}

/** Getter getEsperanceDeVie **/
/** permet de récupérer l'espérance de vie de l'humain
**/
int Humain::getEsperanceDeVie() const {
	return esperanceDeVie;
}

/** Setter setVision **/
/** met à jour la vision de l'humain
**/
void Humain::setVision(int vision) {
	this->vision = vision;
}

/** Setter setEsperanceDeVie **/
/** met à jour l'espérance de vie de l'humain
**/
void Humain::setEsperanceDeVie(int esperanceDeVie) {
	this->esperanceDeVie = esperanceDeVie;
}

/** Méthode chercher **/
/** Permet à un humain de regarder autour de lui s'il y a une ressource du type passé en paramètre
**/
Position Humain::chercher(const type_info & myType) {

    // on récupère les coordonées de l'humain courant
    int x = this->getPos().getAbs();
	int y = this->getPos().getOrd();

    // on créé un tableau de toutes les postions possibles adjacentes à l'humain actuel
	Position tabPos[6];
	tabPos[0] = Position(x,y+2);
	tabPos[1] = Position(x+1,y+1);
	tabPos[2] = Position(x+1,y-1);
	tabPos[3] = Position(x,y-2);
	tabPos[4] = Position(x-1,y-1);
	tabPos[5] = Position(x-1,y+1);

	int i;

    for (i=0; i<5; i++) {
        int r = i + (rand() % (6-i)); // Random remaining position.
        Position temp = tabPos[i];
        tabPos[i] = tabPos[r];
        tabPos[r] = temp;
    }

    // on parcours la map aux alentours de l'humain en parcourant le tableau des différentes positions
	for(i=0;i<6;i++){
	    if(this->getEarth()->existPos(tabPos[i])){
	        if( typeid(*(this->getEarth()->at(this->getEarth()->getCarte().find(tabPos[i])->second)) )==myType )
                return tabPos[i];
        }
    }

    return (Position(-1,-1)); // on retourne une position qui n'existe pas si on n'a pas trouvé d'élement unEle
}

Humain::~Humain() {}

