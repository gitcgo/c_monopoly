/*
 * chance.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "chance.h"
#include "initialisation_chance.h"

chance::chance(string nom, Case* suivante):Case(nom,suivante) {
	this->pile_carte_chance = NULL;

}

chance::~chance() {
	// TODO Auto-generated destructor stub
}

