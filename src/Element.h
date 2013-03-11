/*
 * Element.h
 *
 *  Created on: 26 févr. 2013
 *      Author: quentin
 */



#ifndef ELEMENT_H_
#define ELEMENT_H_

#include "Position.h"
#include <string>

using namespace std;

class Element {
private:
	Position pos;
	string name;
public:
	Element();
	Element(const Position, const string);
	virtual ~Element();
	const Position& getPos() const;
	void setPos(const Position& pos);
	void afficher();
	const string& getName() const;
	void setName(const string& name);
};

#endif /* ELEMENT_H_ */
