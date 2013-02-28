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


class Monde : public vector<Element*>{
public:
	Monde();
	virtual ~Monde();
	void afficher();
	const map<Position, unsigned>& getCarte() const;
	void setCarte(const map<Position, unsigned>& carte);

private:
	map <Position, unsigned> carte;
};
//commentaire pour Florentin

#endif /* MONDE_H_ */
