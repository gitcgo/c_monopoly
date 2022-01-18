/*
 * chance.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "chance.h"
#include "initialisation_chance.h"
#include <stdlib.h>

chance::chance(string nom, Case* suivante):Case(nom,suivante) {
	this->pile_carte_chance = NULL;

}

chance::~chance() {
	// TODO Auto-generated destructor stub
}

void chance::arreterSur(joueur Joueur){
	int choixCarte = rand() % (15) ;
	Carte CarteTiree = this->pile_carte_chance[choixCarte];
	Joueur.crediter(CarteTiree.getGain());
	Joueur.debiter(CarteTiree.getPerte());
	if (CarteTiree.getDeplacement > 0 ) {

	}
}
