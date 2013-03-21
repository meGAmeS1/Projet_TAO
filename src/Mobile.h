/*
 * Mobile.h
 *
 *  Created on: 5 mars 2013
 *      Author: florentinlemoal
 */

#ifndef MOBILE_H_
#define MOBILE_H_

#include "Monde.h"
#include "Position.h"
#include <string>
#include "constants.h"
using namespace std;

class Mobile: public Element {
private :
	int vitesse;

public:
	Mobile();
	Mobile(const Position, const string, Monde*, int);
	virtual ~Mobile();
	int getVitesse() const;
	void setVitesse(int vision);
	virtual void agir();
	bool seDeplacer(Direction);
};

#endif /* MOBILE_H_ */
