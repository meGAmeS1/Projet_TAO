/*
 * Homme.cpp
 *
 *  Created on: 5 mars 2013
 *      Author: florentinlemoal
 */

#include "Homme.h"
#include "Cochon.h"
#include "Position.h"

#include <stdlib.h>     /* srand, rand */

using namespace std;

Homme::Homme() {
	// TODO Auto-generated constructor stub

}

Homme::Homme(const Position _pos, const string _n, Monde* _e, int _vit, int _a, int _edv, int _vis):Humain(_pos, _n, _e, _vit, _a, _edv, _vis){}

Homme::~Homme() {
	// TODO Auto-generated destructor stub
}

void Homme::recupDonut(const Position _posCochon){
    unsigned idCochon = this->getEarth()->getCarte().find(_posCochon)->second;
    //int qte = this->getEarth()->at(idCochon)->getQuantite();
    this->getEarth()->getCarteEdit().erase(_posCochon);
    this->seDeplacer(this->obtenirDirection(this->getPos(),_posCochon));
}

void Homme::agir(){
    Cochon unCochon;
    Position posCochon = this->chercher(unCochon);
    if (posCochon!=Position(-1,-1)){
        this->recupDonut(posCochon);
    }else{
        seDeplacer(this->directRandom());
    }

}

