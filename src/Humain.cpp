/*
 * Humain.cpp
 *
 *  Created on: 11 mars 2013
 *      Author: quentin
 */

#include "Humain.h"

using namespace std;

Humain::Humain() {
	// TODO Auto-generated constructor stub

}

Humain::Humain(const Position _pos, const string _n, int _vit, int _a, int _edv, int _vis):Mobile(_pos, _n, _vit),age(_a),esperanceDeVie(_edv),vision(_vis){}

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

Humain::~Humain() {
	// TODO Auto-generated destructor stub
}

