/*
 * constants.h
 *
 *  Created on: 26 f�vr. 2013
 *      Author: quentin
 */

#ifndef CONSTANTS_H_
#define CONSTANTS_H_

/* Elements au d�marage */
const int kNbHomme = 38; // nombre d'homme dans le monde au d�marrage de l'application
const int kNbFemme = 38; // nombre de femmes dans le monde au d�marrage de l'application
const int kNbDonuts = 35; // nombre de donuts dans le monde au d�marrage de l'application
const int kNbCochon = 35; // nombre de cochons dans le monde au d�marrage de l'application

/*Monde*/
const int kLargM = 80; // Largeur du monde - abscisse
const int kLongM = 60; // Hauteur du monde - ordonn�es


/* DIRECTIONS */
typedef enum {NORD,NORDEST,NORDOUEST,SUD,SUDEST,SUDOUEST} Direction; // type �num�r� qui contient les 6 directions possibles pour un d�placement

#endif /* CONSTANTS_H_ */
