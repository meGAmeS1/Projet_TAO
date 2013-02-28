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
	Monde unM = new Monde();
	unM.afficher();
	return 0;
}
