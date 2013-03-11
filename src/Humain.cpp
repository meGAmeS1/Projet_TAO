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

