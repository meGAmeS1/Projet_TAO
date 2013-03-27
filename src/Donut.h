/*
 * Donut.h
 *
 *  Created on: 5 mars 2013
 *      Author: quentin
 */

#ifndef DONUT_H_
#define DONUT_H_

#include "Ressource.h"
#include <string>

using namespace std;

class Donut: public Ressource {
public:
	Donut();
	Donut(const Position, const string, Monde*, int, int); // le constructeur de Donut contient la position du donut, le nom du donut, le monde auquel appartient le donut, la quantité de ressoucre et le nombre de points de vie de la ressource

	virtual ~Donut();
};

#endif /* DONUT_H_ */
