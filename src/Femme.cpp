/*
 * Femme.cpp
 *
 *  Created on: 5 mars 2013
 *      Author: florentinlemoal
 */

#include "Femme.h"
#include "Cochon.h"
#include <typeinfo>
using namespace std;

/** Constructeur par d�faut **/
Femme::Femme() {}

/** Constructeur param�tr� **/
Femme::Femme(const Position _pos, const string _n, Monde* _e, int _vit, int _a, int _edv, int _vis):
    Humain(_pos, _n, _e, _vit, _a, _edv, _vis)
{}

/** Destructeur **/
Femme::~Femme() {}

/** M�thode chasser **/
/** permet de "chasser" un �l�ment Cochon se trouvant sur une des cases adjacentes
    utilise : - supprElementVect()
              - seDeplacer()
              - obtenirDirection()
**/
void Femme::chasser(const Position _posCochon){
    unsigned idCochon = this->getEarth()->getCarte().find(_posCochon)->second;
    //int qte = this->getEarth()->at(idCochon)->getQuantite();
    this->getEarth()->getCarteEdit().erase(_posCochon);
    this->getEarth()->supprElementVect(idCochon);
    this->seDeplacer(this->obtenirDirection(this->getPos(),_posCochon));
}

/** red�finition de la m�thode agir h�rit�e **/
/** permet de r�cup�rer un �l�ment Cochon s'il y en a un a proximit�
    ou de se d�placer al�atoirement dans le cas contraire
    utilise : - chercher()
              - chasser()
              - seDeplacer()
              - directRandom()
**/
void Femme::agir(){
    Position posCochon = this->chercher(typeid(Cochon));
    if (posCochon!=Position(-1,-1)){
        this->chasser(posCochon);
    }else{
        seDeplacer(this->directRandom());
    }

}
