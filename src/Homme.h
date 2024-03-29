/*
 * Homme.h
 *
 *  Created on: 5 mars 2013
 *      Author: florentinlemoal
 */

#ifndef HOMME_H_
#define HOMME_H_

#include "Humain.h"
#include "Position.h"
#include <string>
using namespace std;

class Homme: public Humain {
public:
	Homme();
	Homme(const Position, const string, Monde*, int, int, int, int);
	virtual ~Homme();
	void recupDonut(const Position);
	void agir();
};

#endif /* HOMME_H_ */
