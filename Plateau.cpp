/*
 * Plateau.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "Plateau.h"

Plateau::Plateau() {
	// TODO Auto-generated constructor stub
	liste_case = NULL;
}

Plateau::~Plateau() {
	// TODO Auto-generated destructor stub
}

void Plateau::creerCases() {

}

void Plateau::lierCases() {

}

Case* Plateau::getCase(int IDCase ){
	return &(this->liste_case[IDCase]);
}
