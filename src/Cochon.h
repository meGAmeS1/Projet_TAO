/*
 * Cochon.h
 *
 *  Created on: 5 mars 2013
 *      Author: quentin
 */

#ifndef COCHON_H_
#define COCHON_H_

#include "Ressource.h"
#include "Mobile.h"

using namespace std;

class Cochon: public Ressource, public Mobile {
public:
	Cochon();
	Cochon(const Position, const string, Monde*, int, int, int); // le constructeur paramétré de Cochon contient la position du cochon, le nom du cochon, le monde auquel appartient le cochon, la vitesse du cochon, la quantité de ressource et le nombre de points de vie

	virtual ~Cochon();
};

#endif /* COCHON_H_ */
