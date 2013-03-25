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

class Mobile: public virtual Element {
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
	Direction obtenirDirection(const Position,const Position);
	Direction directRandom();

};

#endif /* MOBILE_H_ */
