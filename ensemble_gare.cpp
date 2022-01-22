/*
 * gares.cpp
 *
 *  Created on: 22 janv. 2022
 *      Author: aveyronvictor
 */

#include "ensemble_gare.h"

ensemble_gare::ensemble_gare(gare* liste_gare) {
	this->liste_gare = liste_gare ;
}

ensemble_gare::~ensemble_gare() {
	// TODO Auto-generated destructor stub
}

int ensemble_gare::checkMonopole(joueur* ptJoueur){
	int compteur = 0 ;
	for (int i = 0 ; i < 4 ; i ++ ){
		if ( this->liste_gare[i].GetProprietaire() == ptJoueur){
			compteur += 1;
		}
	}
	return compteur ;
}
