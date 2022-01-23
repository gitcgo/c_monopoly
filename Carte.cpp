/*
 * Cartechance.cpp
 *
 *  Created on: 12 janv. 2022
 *      Author: aveyronvictor
 */

#include "Carte.h"

Carte::Carte(std::string text,int gain, int perte,int deplacemenent,Case* ptTeleportation) {
	this->gain = gain;
	this->perte = perte ;
	this->ptTeleportation = ptTeleportation;
	this->text = text;

}

Carte::~Carte() {
	// TODO Auto-generated destructor stub
}

