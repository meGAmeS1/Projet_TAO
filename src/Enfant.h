/*
 * Enfant.h
 *
 *  Created on: 5 mars 2013
 *      Author: florentinlemoal
 */

#ifndef ENFANT_H_
#define ENFANT_H_

#include "Humain.h"
#include "Position.h"
#include <string>
using namespace std;

class Enfant: public Humain {
public:
	Enfant();
	Enfant(const Position, const string, Monde*, int, int, int, int);
	virtual ~Enfant();
};

#endif /* ENFANT_H_ */
