/*
 * Terrain.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "Terrain.h"

Terrain::Terrain(string nom,int loyer , int prixAchat,string couleur, Case* suivante):propriete(nom,loyer,prixAchat,suivante) {
	this->couleur = couleur ;
}

Terrain::~Terrain() {
	// TODO Auto-generated destructor stub
}

