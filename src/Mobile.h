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

public:
	Mobile();
	virtual ~Mobile();
	int getVision() const;
	void setVision(int vision);
};

#endif /* MOBILE_H_ */
