/*
 * Ressource.h
 *
 *  Created on: 5 mars 2013
 *      Author: quentin
 */

#ifndef RESSOURCE_H_
#define RESSOURCE_H_

#include "Monde.h"
#include "Position.h"
#include <string>

using namespace std;

class Ressource: public virtual Element {
private:
	int quantite;
	int pointDeVie;
public:
	Ressource();
	Ressource(const Position, const string, Monde*, int, int); // le constructeur param�tr� de Ressource prend un param�tre la position de la ressource, le monde auquel appartient la ressource, la quantit� de la ressource et le nombre de points de vie de la ressource
	virtual ~Ressource();
	int getPointDeVie() const; // permet de r�cup�rer le nombre de points de vie de la ressource
	void setPointDeVie(int pointDeVie); // permet de d�finir un nombre de points de vie pour la ressource
	int getQuantite() const; // permet de r�cup�rer la quantit� de la ressource
	void setQuantite(int quantite); // permet de d�finir la quantit� de la ressource
};

#endif /* RESSOURCE_H_ */
