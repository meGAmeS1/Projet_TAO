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
#include "Element.h"
#include "Position.h"

class Monde : public vector<Element*>{
public:
	Monde();
	virtual ~Monde();
	void afficher();
	const map<Position, unsigned>& getCarte() const;
	map<Position, unsigned>& getCarteEdit();
	void setCarte(const map<Position, unsigned>& carte);
	Position creerPos();
	bool existPos(Position);

private:
	map <Position, unsigned> carte;
};

#endif /* MONDE_H_ */
