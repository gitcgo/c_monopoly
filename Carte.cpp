/*
 * Cartechance.cpp
 *
 *  Created on: 12 janv. 2022
 *      Author: aveyronvictor
 */

#include "Carte.h"

Carte::Carte(string text,int gain, int perte,int deplacemenent,Case teleportation) {
	this->gain = gain;
	this->perte = perte ;
	this-> deplacemenent = deplacemenent ;
	this->teleportation = teleportation;
	this->text = text;

}

Carte::~Carte() {
	// TODO Auto-generated destructor stub
}

