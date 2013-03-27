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

Ressource::Ressource(const Position _pos, const string _name, Monde* _e, int _qte, int _pv): // le constructeur paramétré de Ressource prend un paramètre la position de la ressource, le monde auquel appartient la ressource, la quantité de la ressource et le nombre de points de vie de la ressource
    quantite(_qte), // quantité de chaque ressource
    pointDeVie(_pv) // chaque ressoucre est rammassée en une seule fois
{
    setPos(_pos); // permet de définir la position de l'élement
    setName(_name); // permet de définir le nom d'une ressource
    this->setEarth(_e); // permet de définir le monde auquel appartient la ressource
}

Ressource::~Ressource() {
	// TODO Auto-generated destructor stub
}


int Ressource::getPointDeVie() const { // permet de récupérer le nombre de points de vie de la ressource
	return pointDeVie;
}

void Ressource::setPointDeVie(int pointDeVie) { // permet de définir un nombre de points de vie pour la ressource
	this->pointDeVie = pointDeVie;
}

int Ressource::getQuantite() const { // permet de récupérer la quantité de la ressource
	return quantite;
}

void Ressource::setQuantite(int quantite) { // permet de définir la quantité de la ressource
	this->quantite = quantite;
}
