/*
 * Element.cpp
 *
 *  Created on: 26 f�vr. 2013
 *      Author: quentin
 */

#include "Monde.h"
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

const string& Element::getName() const {
	return name;
}

Monde* Element::getEarth() const {
	return earth;
}

void Element::setEarth(Monde* earth) {
	this->earth = earth;
}

void Element::setName(const string& name) {
	this->name = name;
}

void Element::afficher(){
cout<<name<<" "<<pos<<endl;
}

Element::~Element() {
	// TODO Auto-generated destructor stub
}

