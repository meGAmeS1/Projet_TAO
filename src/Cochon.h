/*
 * Cochon.h
 *
 *  Created on: 5 mars 2013
 *      Author: quentin
 */

#ifndef COCHON_H_
#define COCHON_H_

#include "Ressource.h"
#include "Mobile.h"

using namespace std;

class Cochon: public Ressource, public Mobile {
public:
	Cochon();
	virtual ~Cochon();
};

#endif /* COCHON_H_ */
