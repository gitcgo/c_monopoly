/*
 * taxe.cpp
 *
 *  Created on: 18 janv. 2022
 *      Author: aveyronvictor
 */

#include "taxe.h"

taxe::taxe(string nom, Case* suivante):Case(nom,suivante) {
}

taxe::~taxe() {
	// TODO Auto-generated destructor stub
}

void taxe::arreterSur(joueur* ptJoueur){
	joueur Joueur = *ptJoueur ;
	Joueur.debiter(200);
}
