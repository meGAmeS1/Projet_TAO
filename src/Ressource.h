/*
 * Ressource.h
 *
 *  Created on: 5 mars 2013
 *      Author: quentin
 */

#ifndef RESSOURCE_H_
#define RESSOURCE_H_

#include "Monde.h"
#include "Position.h"
#include <string>

using namespace std;

class Ressource: public virtual Element {
private:
	int quantite;
	int pointDeVie;
public:
	Ressource();
	Ressource(const Position, const string, Monde*, int, int);
	virtual ~Ressource();
	int getPointDeVie() const;
	void setPointDeVie(int pointDeVie);
	int getQuantite() const;
	void setQuantite(int quantite);
};

#endif /* RESSOURCE_H_ */
