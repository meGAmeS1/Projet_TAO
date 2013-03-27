/*
 * Humain.h
 *
 *  Created on: 11 mars 2013
 *      Author: Quentin Maginot
 */

#ifndef HUMAIN_H_
#define HUMAIN_H_

#include "Mobile.h"
#include "Cochon.h"
#include "Position.h"
#include <string>
#include <typeinfo>

using namespace std;

class Humain: public Mobile {
private:
	int age;    // l'age de l'humain
	int esperanceDeVie;   // l'espérance de vie de l'humain
	int vision;        // la vision de l'humain
public:
	Humain();
	Humain(const Position, const string, Monde*, int, int, int, int);
	virtual ~Humain();
	int getAge() const;
	void setAge(int age);
	int getEsperanceDeVie() const;
	void setEsperanceDeVie(int esperanceDeVie);
	int getVision() const;
	void setVision(int vision);
	Position chercher(const type_info &);
};

#endif /* HUMAIN_H_ */
