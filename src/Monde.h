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
#include <map>
#include <string>
#include "Position.h"
#include "constants.h"

class Element;

class Monde : public vector<Element*>{
public:
	Monde();
	virtual ~Monde();
	void afficher();
	const map<Position, unsigned>& getCarte() const;
	map<Position, unsigned>& getCarteEdit();
	Position creerPos();
	bool existPos(Position);

private:
	map <Position, unsigned> carte;
};

#endif /* MONDE_H_ */

#ifndef ELEMENT_H_
#define ELEMENT_H_

class Element {
private:
	Position pos;
	string name;
	Monde * earth;
public:
	Element();
	Element(Monde*);
	Element(const Element &);
	virtual ~Element();
	const Position& getPos() const;
	void setPos(const Position& pos);
	void afficher();
	const string& getName() const;
	void setName(const string& name);
	Monde* getEarth() const;
	void setEarth(Monde* earth);
	virtual void agir(void);
};

#endif


