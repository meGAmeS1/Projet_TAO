/*
 * Mobile.cpp
 *
 *  Created on: 5 mars 2013
 *      Author: florentinlemoal
 */

#include "Mobile.h"
#include "Monde.h"
#include "constants.h"
using namespace std;

Mobile::Mobile() {
	// TODO Auto-generated constructor stub

}

Mobile::Mobile(const Position _pos, const string _n, int _vit):Element(_pos, _n), vitesse(_vit){}

int Mobile::getVitesse() const {
	return vitesse;
}

void Mobile::setVitesse(int vitesse) {
	this->vitesse = vitesse;
}


Mobile::~Mobile() {
	// TODO Auto-generated destructor stub
}

bool Mobile::seDeplacer(Direction _dir){

	Position oldPos = this->getPos();
	Position posFuture = this->getPos(); // on initialise la posfuture avec l'actuelle

	switch (_dir) {
		case NORD:
			if (posFuture.getOrd()<(longM-1))
				posFuture.setOrd(posFuture.getOrd()+2);
			else
				return false;
		break;

		case NORDOUEST:
			if (posFuture.getOrd()<longM && posFuture.getAbs()>1){
				posFuture.setOrd(posFuture.getOrd()+1);
				posFuture.setAbs(posFuture.getAbs()-1);
			}
			else
				return false;
		break;

		case NORDEST:
			if (posFuture.getOrd()<longM && posFuture.getAbs()<largM){
							posFuture.setOrd(posFuture.getOrd()+1);
							posFuture.setAbs(posFuture.getAbs()+1);
			}
			else
				return false;
		break;

		case SUD:
			if (posFuture.getOrd()>2)
				posFuture.setOrd(posFuture.getOrd()-2);
			else
				return false;
		break;

		case SUDOUEST:
			if (posFuture.getOrd()>1 && posFuture.getAbs()>1){
				posFuture.setOrd(posFuture.getOrd()-1);
				posFuture.setAbs(posFuture.getAbs()-1);
			}
			else
				return false;
		break;

		case SUDEST:
			if (posFuture.getOrd()>1 && posFuture.getAbs()<largM){
				posFuture.setOrd(posFuture.getOrd()-1);
				posFuture.setAbs(posFuture.getAbs()+1);
			}
			else
				return false;
		break;
	}

	//on vérifie si il y a un élément à cette position future
	if(this->getEarth()->existPos(posFuture)){
		return false;
	}

	//on change l'élément de position
	unsigned indice = this->getEarth()->getCarteEdit().find(oldPos)->second;
	this->setPos(posFuture);
	this->getEarth()->getCarteEdit().erase(oldPos);
	this->getEarth()->getCarteEdit().insert(pair <Position, unsigned> (posFuture, indice));



	return true;
}
