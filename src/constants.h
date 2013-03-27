/*
 * constants.h
 *
 *  Created on: 26 févr. 2013
 *      Author: quentin
 */

#ifndef CONSTANTS_H_
#define CONSTANTS_H_

/* Elements au démarage */
const int kNbHomme = 8; // nombre d'homme dans le monde au démarrage de l'application
const int kNbFemme = 8; // nombre de femmes dans le monde au démarrage de l'application
const int kNbDonuts = 5; // nombre de donuts dans le monde au démarrage de l'application
const int kNbCochon = 5; // nombre de cochons dans le monde au démarrage de l'application

/*Monde*/
const int kLargM = 16; // Largeur du monde - abscisse
const int kLongM = 16; // Hauteur du monde - ordonnées


/* DIRECTIONS */
typedef enum {NORD,NORDEST,NORDOUEST,SUD,SUDEST,SUDOUEST} Direction; // type énuméré qui contient les 6 directions possibles pour un déplacement

#endif /* CONSTANTS_H_ */
