/*
 * Femme.h
 *
 *  Created on: 5 mars 2013
 *      Author: florentinlemoal
 */

#ifndef FEMME_H_
#define FEMME_H_
using namespace std;

#include "Humain.h"

class Femme: public Humain {
public:
	Femme();
	Femme(const Position, const string, int, int, int, int);
	virtual ~Femme();
};

#endif /* FEMME_H_ */
