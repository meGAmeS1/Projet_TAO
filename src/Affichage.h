#ifndef AFFICHAGE_H
#define AFFICHAGE_H

#include <string>
#include "Position.h"
#include "Element.h"

using namespace std;


void afficherGrille();
void placerPosition(const Position _pos, const string _letter, int color);
void placerElement(const Element *_ele);
void supprimerPosition (const Position _pos);
void effacerAllPos ();
void refreshMap (Monde world);
#endif // AFFICHAGE_H
