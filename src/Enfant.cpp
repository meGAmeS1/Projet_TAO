/*
 * Enfant.cpp
 *
 *  Created on: 5 mars 2013
 *      Author: florentinlemoal
 */

#include "Enfant.h"
using namespace std;

Enfant::Enfant() {
	// TODO Auto-generated constructor stub

}

Enfant::Enfant(const Position _pos, const string _n, int _vit, int _a, int _edv, int _vis):Humain(_pos, _n, _vit, _a, _edv, _vis){}


Enfant::~Enfant() {
	// TODO Auto-generated destructor stub
}

