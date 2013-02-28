/*
 * Monde.cpp
 *
 *  Created on: 28 févr. 2013
 *      Author: quentin
 */

#include "Monde.h"
#include "Element.h"
#include "Position.h"

using namespace std;

Monde::Monde() {
	Position pos (1,3);
	Element * elt = new Element(pos, "Toto");
	push_back(elt); //pas d'objet car le monde est un vecteur
	carte.insert(pair <Position, unsigned> (pos, size()-1 ) );

}

Monde::~Monde() {
	// TODO Auto-generated destructor stub
}

void Monde::afficher()const
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

void Monde::setCarte(const map<Position, unsigned>& carte) {
	this->carte = carte;
}
