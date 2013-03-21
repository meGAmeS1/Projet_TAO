/*
 * Cochon.cpp
 *
 *  Created on: 5 mars 2013
 *      Author: quentin
 */

#include "Cochon.h"

using namespace std;

Cochon::Cochon() {
	// TODO Auto-generated constructor stub

}

Cochon::Cochon(const Position _pos, const string _name, Monde* _e, int _vit, int _qte, int _pv):Mobile(_pos, _name, _e, _vit),Ressource(_pos, _name, _e, _qte, _pv){}

Cochon::~Cochon() {
	// TODO Auto-generated destructor stub
}

