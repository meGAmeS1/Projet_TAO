/*
 * Monde.cpp
 *
 *  Created on: 28 févr. 2013
 *      Author: quentin
 */

#include "Monde.h"
#include "Element.h"
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
cout<<"Map : "<<endl;
map<Position, unsigned>::const_iterator Iter;
for(Iter=getCarte().begin(); Iter!=getCarte().end() ; Iter++)
cout<<Iter->first<<" "<<Iter->second<<endl;
}

const map<Position, unsigned>& Monde::getCarte() const {
	return carte;
}

map<Position, unsigned>& Monde::getCarteEdit() {
	return carte;
}

void Monde::setCarte(const map<Position, unsigned>& carte) {
	this->carte = carte;
}

bool Monde::existPos(Position pos) {
	bool result = false;

	// Méthode qui recherche la position
	return result;
}

Position Monde::creerPos()
{
	int posX, posY;
	Position pos;
	bool isOk = false;

	while (isOk == false)
	{
		posX = rand() % 16 + 1;
		posY = rand() % 16 + 1;

		if ((posX + posY) % 2 == 1) {
			if (posY < 16) {
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
