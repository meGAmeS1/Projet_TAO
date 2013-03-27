/*
 * Donut.cpp
 *
 *  Created on: 5 mars 2013
 *      Author: quentin
 */

#include "Donut.h"

using namespace std;

Donut::Donut() {
	// TODO Auto-generated constructor stub
}

Donut::Donut(const Position _pos, const string _name, Monde* _e, int _qte, int _pv): // le constructeur de Donut prend en paramètre la position du donut, le nom du donut, le monde auquel appartient le donut, la quantité de ressoucre et le nombre de points de vie de la ressource
Ressource(_pos, _name, _e, _qte, _pv) // appel au constructeur paramétré de Ressource
{}

Donut::~Donut() {
	// TODO Auto-generated destructor stub
}

