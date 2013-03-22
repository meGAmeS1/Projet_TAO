/*
 * Homme.cpp
 *
 *  Created on: 5 mars 2013
 *      Author: florentinlemoal
 */

#include "Homme.h"
#include "Cochon.h"
#include "Position.h"
using namespace std;

Homme::Homme() {
	// TODO Auto-generated constructor stub

}

Homme::Homme(const Position _pos, const string _n, Monde* _e, int _vit, int _a, int _edv, int _vis):Humain(_pos, _n, _e, _vit, _a, _edv, _vis){}

Homme::~Homme() {
	// TODO Auto-generated destructor stub
}

bool Homme::recupDonut(){
//    Cochon unCochon;
//    Position posCochon = this->chercher(unCochon);
//    if (posCochon!=NULL){
//        unsigned idCochon = this->getEarth()->getCarte().find(posCochon)->second;
//        int qte = this->getEarth()->at(idCochon)->getQuantite();
//        /************/
//        /*A continuer*/
//        /***************/
//
//    }

}

