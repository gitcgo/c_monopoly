/*
 * depart.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "depart.h"
#include "Case.h"
#include "joueur.h"

depart::depart(std::string nom,Case* suivante):Case(nom,suivante) {
	// TODO Auto-generated constructor stub

}

depart::~depart() {
	// TODO Auto-generated destructor stub
}

void depart::arreterSur(joueur* ptjoueur) {
	joueur Joueur = *ptjoueur;
	Joueur.crediter(200);
}
