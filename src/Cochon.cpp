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

Cochon::Cochon(const Position _pos, const string _name, Monde* _e, int _vit, int _qte, int _pv): // le constructeur de Cochon prend en param�tre la position du cochon, le nom du cochon, le monde auquel appartient le cochon, la vitesse du cochon, la quantit� de ressource et le nombre de points de vie
Mobile(_pos, _name, _e, _vit), // appel au constructeur param�tr� de Mobile
Ressource(_pos, _name, _e, _qte, _pv) // appel au constructeur param�tr� de Ressource
{}

Cochon::~Cochon() {
	// TODO Auto-generated destructor stub
}


