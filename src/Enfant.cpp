/*
 * Enfant.cpp
 *
 *  Created on: 5 mars 2013
 *      Author: florentinlemoal
 */

#include "Enfant.h"
using namespace std;

/** Constructeur par défaut **/
Enfant::Enfant() {}

/** Constructeur paramétré **/
Enfant::Enfant(const Position _pos, const string _n, Monde* _e, int _vit, int _a, int _edv, int _vis):
    Humain(_pos, _n, _e, _vit, _a, _edv, _vis)
{}

/** Destructeur **/
Enfant::~Enfant() {}

