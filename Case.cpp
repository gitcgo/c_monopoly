/*
 * Case.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "Case.h"

Case::Case(string nom, Case* suivante) {
	this->nom  = nom ;
	this->suivante = suivante;
}

Case::~Case() {
	// TODO Auto-generated destructor stub
}

