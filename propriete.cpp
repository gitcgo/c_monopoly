/*
 * propriete.cpp
 *
 *  Created on: 23 dÃ©c. 2021
 *      Author: aveyronvictor
 */

#include "propriete.h"

propriete::propriete(string nom, int* ptLoyer, int prixAchat, Case* suivante, joueur* ptProprietair):Case(nom,suivante) {
	this->nom = nom;
	this->ptLoyer =ptLoyer ;
	this->prixAchat = prixAchat;
	this->ptProprietaire =ptProprietair ;
}

propriete::~propriete() {
	// TODO Auto-generated destructor stub
}


