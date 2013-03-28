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

/** Constructeur par d�faut **/
Homme::Homme() {}

/** Constructeur param�tr� **/
Homme::Homme(const Position _pos, const string _n, Monde* _e, int _vit, int _a, int _edv, int _vis):
    Humain(_pos, _n, _e, _vit, _a, _edv, _vis)
{}

/** Destructeur **/
Homme::~Homme() {}

/** M�thode recupDonut **/
/** permet de r�colter un �l�ment Donut se trouvant sur une des cases adjacentes
    utilise : - supprElementVect()
              - seDeplacer()
              - obtenirDirection()
**/
void Homme::recupDonut(const Position _posDonut){
    //int qte = this->getEarth()->at(idCochon)->getQuantite();
    this->getEarth()->disparaitreDuMonde(_posDonut);
    this->seDeplacer(this->obtenirDirection(this->getPos(),_posDonut));
}

/** red�finition de la m�thode agir h�rit�e **/
/** permet de recolter un �l�ment Donut s'il y en a un a proximit�
    ou de se d�placer al�atoirement dans le cas contraire
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
