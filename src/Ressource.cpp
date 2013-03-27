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

Ressource::Ressource(const Position _pos, const string _name, Monde* _e, int _qte, int _pv): // le constructeur param�tr� de Ressource prend un param�tre la position de la ressource, le monde auquel appartient la ressource, la quantit� de la ressource et le nombre de points de vie de la ressource
    quantite(_qte), // quantit� de chaque ressource
    pointDeVie(_pv) // chaque ressoucre est rammass�e en une seule fois
{
    setPos(_pos); // permet de d�finir la position de l'�lement
    setName(_name); // permet de d�finir le nom d'une ressource
    this->setEarth(_e); // permet de d�finir le monde auquel appartient la ressource
}

Ressource::~Ressource() {
	// TODO Auto-generated destructor stub
}


int Ressource::getPointDeVie() const { // permet de r�cup�rer le nombre de points de vie de la ressource
	return pointDeVie;
}

void Ressource::setPointDeVie(int pointDeVie) { // permet de d�finir un nombre de points de vie pour la ressource
	this->pointDeVie = pointDeVie;
}

int Ressource::getQuantite() const { // permet de r�cup�rer la quantit� de la ressource
	return quantite;
}

void Ressource::setQuantite(int quantite) { // permet de d�finir la quantit� de la ressource
	this->quantite = quantite;
}
