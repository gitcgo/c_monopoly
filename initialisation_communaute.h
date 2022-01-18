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

Carte* initialisation_communaute(Plateau plateau) {
	Carte* pile_carte_communaute = new Carte[16];
	depart depart1 = depart("depart 1",NULL);

	// Je crée chaque carte avec text gain perte deplacement telportation
	pile_carte_communaute[0] = Carte("Payez le police d'assurance : 50 euros",0,50,0);
	pile_carte_communaute[1] = Carte("Vous héritez de 100",100,0,0);
	pile_carte_communaute[2] = Carte("Vous êtes libéré de prison",0,0,0);

	return pile_carte_communaute;
}


#endif /* INITIALISATION_CARTES_H_ */
