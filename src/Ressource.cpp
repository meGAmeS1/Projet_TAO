/*
 * Ressource.cpp
 *
 *  Created on: 5 mars 2013
 *      Author: quentin
 */

#include "Ressource.h"

using namespace std;

Ressource::Ressource() {
	// TODO Auto-generated constructor stub
}

Ressource::Ressource(const Position _pos, const string _name, Monde* _e, int _qte, int _pv):
    Element(_pos,_name, _e),
    quantite(_qte),
    pointDeVie(_pv)
{
    setPos(_pos);
    setName(_name);
}

Ressource::~Ressource() {
	// TODO Auto-generated destructor stub
}


int Ressource::getPointDeVie() const {
	return pointDeVie;
}

void Ressource::setPointDeVie(int pointDeVie) {
	this->pointDeVie = pointDeVie;
}

int Ressource::getQuantite() const {
	return quantite;
}

void Ressource::setQuantite(int quantite) {
	this->quantite = quantite;
}
