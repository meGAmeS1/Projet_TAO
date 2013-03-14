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
	Donut(const Position, const string, int, int);
	virtual ~Donut();
};

#endif /* DONUT_H_ */
