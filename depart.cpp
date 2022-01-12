/*
 * depart.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "depart.h"

depart::depart(string nom,Case* suivante):Case(nom,suivante) {
	// TODO Auto-generated constructor stub

}

depart::~depart() {
	// TODO Auto-generated destructor stub
}

void depart::arreterSur(joueur* ptjoueur) {
	*ptjoueur->crediter(200);
}
