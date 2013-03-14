/*
 * Mobile.h
 *
 *  Created on: 5 mars 2013
 *      Author: florentinlemoal
 */

#ifndef MOBILE_H_
#define MOBILE_H_

#include "Element.h"
using namespace std;

class Mobile: public Element {
private :
	int vitesse;

public:
	Mobile();
	Mobile(const Position, const string, int);
	virtual ~Mobile();
	int getVitesse() const;
	void setVitesse(int vision);
};

#endif /* MOBILE_H_ */
