/*
 * initialisation_cartes.h
 *
 *  Created on: 12 janv. 2022
 *      Author: aveyronvictor
 */

#ifndef INITIALISATION_CARTES_H_
#define INITIALISATION_CARTES_H_


#include "Carte.h"
#include "depart.h"
#include "Plateau.h"

Carte* initialisation_chance(Plateau plateau) {
	depart depart1 = depart("depart 1",NULL);
	// Je crée chaque carte avec textgain perte deplacement telportation
	Carte carte1 = Carte("Alllez directement sur la Case Départ",NULL,NULL,NULL,depart1);
	Carte carte2 = Carte("Interpol vous arrête, rendez-vous en prison sans passer par la case départ",0,0,NULL); // A remplcer par la case prison
}


#endif /* INITIALISATION_CARTES_H_ */
