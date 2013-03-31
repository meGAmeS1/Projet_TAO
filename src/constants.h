/*
 * constants.h
 *
 *  Created on: 26 févr. 2013
 *      Author: quentin
 */

#ifndef CONSTANTS_H_
#define CONSTANTS_H_


/*Monde*/
const int kLargM = 20; // Largeur du monde - abscisse
const int kLongM = 20; // Hauteur du monde - ordonnées

/* Elements au démarage */
const int kNbHomme = 0.6 * kLargM; // nombre d'homme dans le monde au démarrage de l'application
const int kNbFemme = 0.6 * kLongM; // nombre de femmes dans le monde au démarrage de l'application
const int kNbDonuts = 0.5 * kLargM; // nombre de donuts dans le monde au démarrage de l'application
const int kNbCochon = 0.5 * kLongM; // nombre de cochons dans le monde au démarrage de l'application

/* DIRECTIONS */
typedef enum {NORD,NORDEST,NORDOUEST,SUD,SUDEST,SUDOUEST} Direction; // type énuméré qui contient les 6 directions possibles pour un déplacement

#endif /* CONSTANTS_H_ */
