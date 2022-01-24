/*
 * taxe.cpp
 *
 *  Created on: 18 janv. 2022
 *      Author: aveyronvictor
 */

#include "taxe.h"

taxe::taxe(std::string nom, Case* suivante):Case(nom,suivante) {
}

taxe::~taxe() {
	// TODO Auto-generated destructor stub
}

void taxe::arreterSur(joueur* ptJoueur){
	(*ptJoueur).debiter(200);
}
