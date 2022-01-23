/*
 * Case.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "Case.h"
#include "joueur.h"

Case::Case(std::string nom, Case* suivante) {
	this->nom  = nom ;
	this->suivante = suivante;
}

Case::Case(std::string nom) {
    this->nom  = nom ;
    this->suivante= NULL;
}

Case::~Case() {
	// TODO Auto-generated destructor stub
}

void Case::arreterSur(joueur *joueur) {
	std::cout << "arreterSur non défini" << std::endl;
}

