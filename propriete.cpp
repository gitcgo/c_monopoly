/*
 * propriete.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "propriete.h"

propriete::propriete(string nom,int loyer , int prixAchat,Case* suivante):Case(nom,suivante) {
	this->loyer =loyer ;
	this->prixAchat = prixAchat;
}

propriete::~propriete() {
	// TODO Auto-generated destructor stub
}

void propriete::arreterSur() {

}

