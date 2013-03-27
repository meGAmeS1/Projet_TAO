/*
 * Homme.cpp
 *
 *  Created on: 5 mars 2013
 *      Author: florentinlemoal
 */

#include "Homme.h"
#include "Cochon.h"
#include "Position.h"
#include "Donut.h"
#include <typeinfo>
#include <stdlib.h>     /* srand, rand */

using namespace std;

Homme::Homme() {
	// TODO Auto-generated constructor stub

}

Homme::Homme(const Position _pos, const string _n, Monde* _e, int _vit, int _a, int _edv, int _vis):Humain(_pos, _n, _e, _vit, _a, _edv, _vis){}

Homme::~Homme() {
	// TODO Auto-generated destructor stub
}

void Homme::recupDonut(const Position _posDonut){
    unsigned idDonut = this->getEarth()->getCarte().find(_posDonut)->second;
    //int qte = this->getEarth()->at(idCochon)->getQuantite();
    this->getEarth()->getCarteEdit().erase(_posDonut);
    this->getEarth()->supprElementVect(idDonut);
    this->seDeplacer(this->obtenirDirection(this->getPos(),_posDonut));
}

void Homme::agir(){
    Position posDonut = this->chercher(typeid(Donut));
    if (posDonut!=Position(-1,-1)){
        this->recupDonut(posDonut);
    }else{
        seDeplacer(this->directRandom());
    }
}
