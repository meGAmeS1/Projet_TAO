/*
 * Humain.cpp
 *
 *  Created on: 11 mars 2013
 *      Author: quentin
 */

#include "Humain.h"
#include "Monde.h"
#include "Position.h"
#include "typeinfo"

using namespace std;

Humain::Humain() {
	// TODO Auto-generated constructor stub

}

Humain::Humain(const Position _pos, const string _n, Monde* _e, int _vit, int _a, int _edv, int _vis):Mobile(_pos, _n, _e, _vit),age(_a),esperanceDeVie(_edv),vision(_vis){}

int Humain::getAge() const {
	return age;
}

void Humain::setAge(int age) {
	this->age = age;
}

int Humain::getEsperanceDeVie() const {
	return esperanceDeVie;
}

int Humain::getVision() const {
	return vision;
}

void Humain::setVision(int vision) {
	this->vision = vision;
}

void Humain::setEsperanceDeVie(int esperanceDeVie) {
	this->esperanceDeVie = esperanceDeVie;
}

Position Humain::chercher(Element unEle) {
	int x = this->getPos().getAbs();
	int y = this->getPos().getOrd();
	Position posParcours;
	Position posRetournee;

	posParcours = Position(x,y+1);

	if(this->getEarth()->existPos(posParcours))
	{
		if( typeid(*(this->getEarth()->at(this->getEarth()->getCarte().find(posParcours)->second)) )==typeid(Element) )
		{
			return posRetournee;
		}
	}
	else
	{
		return (Position(0,0));
	}

}

Humain::~Humain() {
	// TODO Auto-generated destructor stub
}

