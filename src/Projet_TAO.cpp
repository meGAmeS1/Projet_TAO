//============================================================================
// Name        : Projet_TAO.cpp
// Author      : Le-Moal/Maginot/Revilliod
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Monde.h"
#include "Element.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
#include <string>

using namespace std;

int main() {
	srand (time(NULL));

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Position position(1,2);
	cout<<position<<endl;

	Monde monde;

	int var;

	for (var = 0; var < 10; var++) {
		Position pos = monde.creerPos();
		string nom = "Element";
		Element * elt1 = new Element(pos, nom);
		monde.push_back(elt1);
		monde.getCarteEdit().insert(pair <Position, unsigned> (pos, var ) );
	}

	monde.afficher();

	return 0;
}
