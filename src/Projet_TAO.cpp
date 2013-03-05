//============================================================================
// Name        : Projet_TAO.cpp
// Author      : Le-Moal/Maginot/Revilliod
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Monde.h"
#include "Element.h"
#include <iostream>

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Position position(1,2);
	cout<<position<<endl;

	Monde monde;

	Position pos1 = monde.creerPos();
	Element * elt1 = new Element(pos1, "Toto");
	monde.push_back(elt1);
	monde.getCarteEdit().insert(pair <Position, unsigned> (pos1, 1 ) );

	Position pos2 = monde.creerPos();
	Element * elt2 = new Element(pos2, "Tata");
	monde.push_back(elt2);
	monde.getCarteEdit().insert(pair <Position, unsigned> (pos2, 2 ) );

	Position pos3 = monde.creerPos();
	Element * elt3 = new Element(pos3, "Titi");
	monde.push_back(elt3);
	monde.getCarteEdit().insert(pair <Position, unsigned> (pos3, 3 ) );

	monde.afficher();

	return 0;
}
