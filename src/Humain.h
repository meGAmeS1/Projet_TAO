/*
 * Humain.h
 *
 *  Created on: 11 mars 2013
 *      Author: quentin
 */

#ifndef HUMAIN_H_
#define HUMAIN_H_

#include "Mobile.h"

using namespace std;

class Humain: public Mobile {
private:
	int age;
	int esperanceDeVie;
	int vision;
public:
	Humain();
	virtual ~Humain();
	int getAge() const;
	void setAge(int age);
	int getEsperanceDeVie() const;
	void setEsperanceDeVie(int esperanceDeVie);
	int getVision() const;
	void setVision(int vision);
};

#endif /* HUMAIN_H_ */
