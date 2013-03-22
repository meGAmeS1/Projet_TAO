/*
 * Element.cpp
 *
 *  Created on: 26 févr. 2013
 *      Author: quentin
 */

#include "Monde.h"
#include "Position.h"

using namespace std;

Element::Element() {
	// TODO Auto-generated constructor stub

}

Element::Element(Monde *_e):
pos(),
name("Element")
{
    this->earth = _e;
}

Element::Element(const Element & _E){
    this->pos = _E.pos;
    this->name = _E.name;
    this->earth = _E.earth;
}

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

void Element::agir(){}


Element::~Element() {
	// TODO Auto-generated destructor stub
}

