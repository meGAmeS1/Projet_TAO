/*
 * constants.h
 *
 *  Created on: 26 f�vr. 2013
 *      Author: quentin
 */

#ifndef CONSTANTS_H_
#define CONSTANTS_H_


/*Monde*/
const int kLargM = 20; // Largeur du monde - abscisse
const int kLongM = 20; // Hauteur du monde - ordonn�es

/* Elements au d�marage */
const int kNbHomme = 0.6 * kLargM; // nombre d'homme dans le monde au d�marrage de l'application
const int kNbFemme = 0.6 * kLongM; // nombre de femmes dans le monde au d�marrage de l'application
const int kNbDonuts = 0.5 * kLargM; // nombre de donuts dans le monde au d�marrage de l'application
const int kNbCochon = 0.5 * kLongM; // nombre de cochons dans le monde au d�marrage de l'application

/* DIRECTIONS */
typedef enum {NORD,NORDEST,NORDOUEST,SUD,SUDEST,SUDOUEST} Direction; // type �num�r� qui contient les 6 directions possibles pour un d�placement

#endif /* CONSTANTS_H_ */
