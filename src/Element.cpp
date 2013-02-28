/*
 * Element.cpp
 *
 *  Created on: 26 févr. 2013
 *      Author: quentin
 */

#include "Element.h"
#include "Position.h"

Element::Element() {
	// TODO Auto-generated constructor stub

}

const Position& Element::getPos() const {
	return pos;
}

void Element::setPos(const Position& pos) {
	this->pos = pos;
}

Element::~Element() {
	// TODO Auto-generated destructor stub
}

