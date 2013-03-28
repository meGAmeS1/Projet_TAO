/*
 * Mobile.cpp
 *
 *  Created on: 5 mars 2013
 *      Author: florentinlemoal
 */

#include "Mobile.h"
#include "Monde.h"
#include "constants.h"
#include "Affichage.h"
#include <stdlib.h>     /* srand, rand */


using namespace std;

Mobile::Mobile() {
	// TODO Auto-generated constructor stub

}

Mobile::Mobile(const Position _pos, const string _n, Monde* _e , int _vit):
vitesse(_vit)
{
    setPos(_pos);
    setName(_n);
    this->setEarth(_e);
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
	this->seDeplacer(directRandom());
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


    supprimerPosition(oldPos);
    placerElement(this);
	return true;
}

Direction Mobile::obtenirDirection(const Position _depart ,const Position _arrivee){
    int ordonnee = _arrivee.getOrd() - _depart.getOrd();
    int abscisse = _arrivee.getAbs() - _depart.getAbs();
    //Position posDif(abscisse,ordonnee);

    if (abscisse==0 && ordonnee==2) return NORD;
    else if (abscisse==1 && ordonnee==1) return NORDEST;
    else if (abscisse==1 && ordonnee==-1) return SUDEST;
    else if (abscisse==0 && ordonnee==-2) return SUD;
    else if (abscisse==-1 && ordonnee==-1) return SUDOUEST;
    else if (abscisse==-1 && ordonnee==1) return NORDOUEST;
}


Direction Mobile::directRandom(){
    Direction d = static_cast<Direction>(rand()%6);
}
