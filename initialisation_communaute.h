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
	pile_carte_communaute[0] = Carte("Payez le police d'assuracicfjchjzvhzuohvzeujgviozehgoezgkezhoufgjeipgezncçnuer"ib rué"çur iué"r"é uriué"yr ui"éyry"éiu ry"éè ry"éiu rh"zeufiez hfuiezhjfgezuf hize foiez jfiuezhfuiezhfuez huefiez iu rhfiezgfez fezrfhezu fhuehferuf hezu fhezuof ezhu rfhze iufyuezhfiezuhvurjei htuiezh ezyrfhe zhujfzhe fzhhe zfbc ez hfuih ezfuihzeuyfhzeuh fuizeh hzeui fjiuzehf verhfze  hjfkezo jfjnce : 50 euros",0,50,0);
	pile_carte_communaute[1] = Carte("Vous héritez de 100 euros",100,0,0);
	pile_carte_communaute[2] = Carte("Conservez cette carte pour pouvoir être libéré de prison",0,0,0);
	pile_carte_communaute[3] = Carte("Payez la note du médecin : 50 euros",0,50,0);
	pile_carte_communaute[4] = Carte("Vous gagnez le 2nd prix de beauté, recevez 100 euros",100,0,0);
	pile_carte_communaute[5] = Carte("Les contributions vous remboursent 20 euros",20,0,0);
	pile_carte_communaute[6] = Carte("Recevez vos intérêts : 25 euros",25,0,0);


	return pile_carte_communaute;
}


#endif /* INITIALISATION_CARTES_H_ */
