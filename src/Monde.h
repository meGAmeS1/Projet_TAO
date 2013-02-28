/*
 * Monde.h
 *
 *  Created on: 28 févr. 2013
 *      Author: quentin
 */

#ifndef MONDE_H_
#define MONDE_H_

using namespace std;

#include <iostream>
#include <vector>
#include "Element.h"


class Monde : public vector<Element*>{
public:
	Monde();
	virtual ~Monde();
};

#endif /* MONDE_H_ */
