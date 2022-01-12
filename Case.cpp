/*
 * Case.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "Case.h"
#include "joueur.h"

Case::Case(string nom, Case* suivante) {
	this->nom  = nom ;
	this->suivante = suivante;
}

Case::Case(string nom) {
    this->nom  = nom ;
    this->suivante= NULL;
}

Case::~Case() {
	// TODO Auto-generated destructor stub
}

void Case::arreterSur(joueur *joueur) {
    cout << "arreterSur non défini" << endl;
}

