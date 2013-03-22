/*
 * Monde.cpp
 *
 *  Created on: 28 févr. 2013
 *      Author: quentin
 */

#include "Monde.h"
#include "Position.h"
#include "constants.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

Monde::Monde() {

}

Monde::~Monde() {
	// TODO Auto-generated destructor stub
}

void Monde::afficher()
{
cout<<"Vector : "<<endl;
for (unsigned i=0 ; i< size() ; i++)
at(i)->afficher();
//cout<<"Map : "<<endl;
//map<Position, unsigned>::const_iterator Iter;
//for(Iter=getCarte().begin(); Iter!=getCarte().end() ; Iter++)
//cout<<Iter->first<<" "<<Iter->second<<endl;
}

const map<Position, unsigned>& Monde::getCarte() const {
	return carte;
}

map<Position, unsigned>& Monde::getCarteEdit() {
	return carte;
}

bool Monde::existPos(Position pos) {
	bool result = false;
	map<Position, unsigned int>::const_iterator it;
	it = carte.end();

	if (carte.find(pos) != it) result = true;

	return result;
}

Position Monde::creerPos()
{
	int posX, posY;
	Position pos;
	bool isOk = false;

	while (isOk == false)
	{
		posX = rand() % kLargM + 1;
		posY = rand() % (kLongM-1) + 1;

		if ((posX + posY) % 2 == 1) {
			if (posY < kLargM) {
				posY++;
			}
			else {
				posY--;
			}
		}

		pos = Position (posX,posY);

		if (! existPos(pos)) isOk = true;

	}

	return pos;
}
