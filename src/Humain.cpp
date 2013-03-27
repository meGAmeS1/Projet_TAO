/*
 * Humain.cpp
 *
 *  Created on: 11 mars 2013
 *      Author: quentin
 */

#include "Humain.h"
#include "Monde.h"
#include "Position.h"
#include "typeinfo"
#include <stdlib.h>     /* srand, rand */

using namespace std;

Humain::Humain() {
	// TODO Auto-generated constructor stub

}

Humain::Humain(const Position _pos, const string _n, Monde* _e, int _vit, int _a, int _edv, int _vis):Mobile(_pos, _n, _e, _vit),age(_a),esperanceDeVie(_edv),vision(_vis){}

int Humain::getAge() const {
	return age;
}

void Humain::setAge(int age) {
	this->age = age;
}

int Humain::getEsperanceDeVie() const {
	return esperanceDeVie;
}

int Humain::getVision() const {
	return vision;
}

void Humain::setVision(int vision) {
	this->vision = vision;
}

void Humain::setEsperanceDeVie(int esperanceDeVie) {
	this->esperanceDeVie = esperanceDeVie;
}

Position Humain::chercher(const type_info & myType) {
//	int x = this->getPos().getAbs();
//	int y = this->getPos().getOrd();
//	Position posParcours;
//	Position posRetournee;
//
//	posParcours = Position(x,y+1);
//
//	if(this->getEarth()->existPos(posParcours))
//	{
//		if( typeid(*(this->getEarth()->at(this->getEarth()->getCarte().find(posParcours)->second)) )==typeid(Element) )
//		{
//			return posRetournee;
//		}
//	}
//	else
//	{
//		return (Position(0,0));
//	}

    // nouvelle version

    int x = this->getPos().getAbs();
	int y = this->getPos().getOrd();

	Position tabPos[6];

	tabPos[0] = Position(x,y+2);
	tabPos[1] = Position(x+1,y+1);
	tabPos[2] = Position(x+1,y-1);
	tabPos[3] = Position(x,y-2);
	tabPos[4] = Position(x-1,y-1);
	tabPos[5] = Position(x-1,y+1);

	int i;

    for (i=0; i<5; i++) {
        int r = i + (rand() % (6-i)); // Random remaining position.
        Position temp = tabPos[i];
        tabPos[i] = tabPos[r];
        tabPos[r] = temp;
    }


	for(i=0;i<6;i++)
	{
	    if(this->getEarth()->existPos(tabPos[i]))
	    {
	        //cout << myType.name();
	        if( typeid(*(this->getEarth()->at(this->getEarth()->getCarte().find(tabPos[i])->second)) )==myType )
            {
                //cout << "OUI";
                return tabPos[i];
            }
        }
    }

    return (Position(-1,-1)); // on retourne une position qui n'existe pas si on n'a pas trouvé d'élement unEle


}

Humain::~Humain() {
	// TODO Auto-generated destructor stub
}

