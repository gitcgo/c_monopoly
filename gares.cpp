/*
 * gares.cpp
 *
 *  Created on: 22 janv. 2022
 *      Author: aveyronvictor
 */

#include "gares.h"

gares::gares(gare* liste_gare=NULL) {
	// TODO Auto-generated constructor st
	this->liste_gares = liste_gare;

}

gares::~gares() {
	// TODO Auto-generated destructor stub
}

int gares::checkMonopole(joueur* ptJoueur){
	int compteur = 0 ;
	for (int i = 0 ; i < 4 ; i ++ ){
		gare Gare = this->liste_gares[i];
		if (Gare.GetProprietaire() == ptJoueur) {
			compteur += 1 ;
		}
	}
	return compteur ;
}
