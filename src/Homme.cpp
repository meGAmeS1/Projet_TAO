/*
 * Homme.cpp
 *
 *  Created on: 5 mars 2013
 *      Author: florentinlemoal
 */

#include "Homme.h"
#include "Cochon.h"
#include "Position.h"
#include "Donut.h"
#include <typeinfo>
#include <stdlib.h>     /* srand, rand */

using namespace std;

/** Constructeur par défaut **/
Homme::Homme() {}

/** Constructeur paramétré **/
Homme::Homme(const Position _pos, const string _n, Monde* _e, int _vit, int _a, int _edv, int _vis):
    Humain(_pos, _n, _e, _vit, _a, _edv, _vis)
{}

/** Destructeur **/
Homme::~Homme() {}

/** Méthode recupDonut **/
/** permet de récolter un élément Donut se trouvant sur une des cases adjacentes
    utilise : - supprElementVect()
              - seDeplacer()
              - obtenirDirection()
**/
void Homme::recupDonut(const Position _posDonut){
    //int qte = this->getEarth()->at(idCochon)->getQuantite();
    this->getEarth()->disparaitreDuMonde(_posDonut);
    this->seDeplacer(this->obtenirDirection(this->getPos(),_posDonut));
}

/** redéfinition de la méthode agir héritée **/
/** permet de recolter un élément Donut s'il y en a un a proximité
    ou de se déplacer aléatoirement dans le cas contraire
    utilise : - chercher()
              - recupDonut()
              - seDeplacer()
              - directRandom()
**/
void Homme::agir(){
    Position posDonut = this->chercher(typeid(Donut));
    if (posDonut!=Position(-1,-1)){
        this->recupDonut(posDonut);
    }else{
        seDeplacer(this->directRandom());
    }
    this->vieillir();
}
