/*
 * Mobile.cpp
 *
 *  Created on: 5 mars 2013
 *      Author: florentinlemoal
 */

#include "Mobile.h"
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

