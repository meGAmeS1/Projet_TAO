/*
 * Element.cpp
 *
 *  Created on: 26 févr. 2013
 *      Author: quentin
 */

#include "Element.h"
#include "Position.h"

using namespace std;

Element::Element() {
	// TODO Auto-generated constructor stub

}

Element::Element(const Position _p, const string _n):pos(_p),name(_n) {}

const Position& Element::getPos() const {
	return pos;
}

void Element::setPos(const Position& pos) {
	this->pos = pos;
}

void Element::afficher(){
cout<<"Coucou";
}

Element::~Element() {
	// TODO Auto-generated destructor stub
}

