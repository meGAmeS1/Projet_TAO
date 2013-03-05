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
#include <cstdlib>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Position position(1,2);
	cout<<position<<endl;

	Monde monde;
	monde.afficher();

	int v1 = rand() % 30 + 1985;
	cout<<"Valeur de v1 : "<<v1;


	return 0;
}
