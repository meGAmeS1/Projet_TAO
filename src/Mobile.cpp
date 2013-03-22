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

Mobile::Mobile(const Position _pos, const string _n, Monde* _e , int _vit):
    Element(_pos, _n, _e),
    vitesse(_vit)
{
    setPos(_pos);
    setName(_n);
}

int Mobile::getVitesse() const {
	return vitesse;
}

void Mobile::setVitesse(int vitesse) {
	this->vitesse = vitesse;
}


Mobile::~Mobile() {
	// TODO Auto-generated destructor stub
}

void Mobile::agir(){
	this->seDeplacer(SUDOUEST);
}

bool Mobile::seDeplacer(Direction _dir){


	Position oldPos = this->getPos();
	Position posFuture = Position(this->getPos().getAbs(),this->getPos().getOrd()); // on initialise la posfuture avec l'actuelle

	switch (_dir) {
		case NORD:
			if (oldPos.getOrd()<(kLongM-1))
				posFuture.setOrd(posFuture.getOrd()+2);
			else
				return false;
		break;

		case NORDOUEST:
			if (oldPos.getOrd()<kLongM && oldPos.getAbs()>1){
				posFuture.setOrd(posFuture.getOrd()+1);
				posFuture.setAbs(posFuture.getAbs()-1);
			}
			else
				return false;
		break;

		case NORDEST:
			if (oldPos.getOrd()<kLongM && oldPos.getAbs()<kLargM){
							posFuture.setOrd(posFuture.getOrd()+1);
							posFuture.setAbs(posFuture.getAbs()+1);
			}
			else
				return false;
		break;

		case SUD:
			if (oldPos.getOrd()>2)
				posFuture.setOrd(posFuture.getOrd()-2);
			else
				return false;
		break;

		case SUDOUEST:
			if (oldPos.getOrd()>1 && oldPos.getAbs()>1){
				posFuture.setOrd(posFuture.getOrd()-1);
				posFuture.setAbs(posFuture.getAbs()-1);
			}
			else
				return false;
		break;

		case SUDEST:
			if (oldPos.getOrd()>1 && oldPos.getAbs()<kLargM){
				posFuture.setOrd(posFuture.getOrd()-1);
				posFuture.setAbs(posFuture.getAbs()+1);
			}
			else
                return false;
		break;
	}

	//on vérifie si il y a un élément à cette position future
	if(this->getEarth()->existPos(posFuture)){
//	    cout<<"Place oqp "<<oldPos<<"->"<<posFuture<<endl;
		return false;
	}

	//on change l'élément de position
	unsigned indice = this->getEarth()->getCarteEdit().find(oldPos)->second;
	this->setPos(posFuture);
	this->getEarth()->getCarteEdit().erase(oldPos);
	this->getEarth()->getCarteEdit().insert(pair <Position, unsigned> (posFuture, indice));


	return true;
}

