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
	depart belleville = depart("depart 1",NULL);

	// Je crée chaque carte avec text gain perte deplacement telportation
	pile_carte_communaute[0] = Carte("Payez le police d'assurance : 50 euros",0,50,0);
	pile_carte_communaute[1] = Carte("Vous héritez de 100 euros",100,0,0);
	pile_carte_communaute[2] = Carte("Vous êtes libéré de prison",0,0,0);
	pile_carte_communaute[3] = Carte("Payez la note du médecin : 50 euros",0,50,0);
	pile_carte_communaute[4] = Carte("Vous gagnez le 2nd prix de beauté, recevez 100 euros",100,0,0);
	pile_carte_communaute[5] = Carte("Les contributions vous remboursent 20 euros",20,0,0);
	pile_carte_communaute[6] = Carte("Recevez vos intérêts : 25 euros",25,0,0);
	pile_carte_communaute[7] = Carte("Retournez à Boulevard de Belleville",0,0,0,plateau.getCase(1));
	pile_carte_communaute[8] = Carte("Aller en prison",0,0,0,plateau.getCase(10));
	pile_carte_communaute[9] = Carte("Placez vous sur la Case Départ",0,0,0,plateau.getCase(0));
	pile_carte_communaute[10] = Carte("C'est votre anniversaire. Chaque joueur vous donne ",0,0,0);


	return pile_carte_communaute;
}


#endif /* INITIALISATION_CARTES_H_ */
