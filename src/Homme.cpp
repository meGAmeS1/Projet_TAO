/*
 * Homme.cpp
 *
 *  Created on: 5 mars 2013
 *      Author: florentinlemoal
 */

#include "Homme.h"
using namespace std;

Homme::Homme() {
	// TODO Auto-generated constructor stub

}

Homme::Homme(const Position _pos, const string _n, int _vit, int _a, int _edv, int _vis):Humain(_pos, _n, _vit, _a, _edv, _vis){}

Homme::~Homme() {
	// TODO Auto-generated destructor stub
}

