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

/** Constructeur par défaut **/
Femme::Femme() {}

/** Constructeur paramétré **/
Femme::Femme(const Position _pos, const string _n, Monde* _e, int _vit, int _a, int _edv, int _vis):
    Humain(_pos, _n, _e, _vit, _a, _edv, _vis)
{}

/** Destructeur **/
Femme::~Femme() {}

/** Méthode chasser **/
/** permet de "chasser" un élément Cochon se trouvant sur une des cases adjacentes
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

/** redéfinition de la méthode agir héritée **/
/** permet de récupérer un élément Cochon s'il y en a un a proximité
    ou de se déplacer aléatoirement dans le cas contraire
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
