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
	int vision;
	int esperanceDeVie;

public:
	Mobile();
	virtual ~Mobile();
};

#endif /* MOBILE_H_ */
