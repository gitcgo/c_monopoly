/*
 * Terrain.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "Terrain.h"

Terrain::Terrain(string nom,int loyer , int prixAchat, string couleur, Case* suivante):propriete(nom,loyer,prixAchat,suivante) {
	this->couleur = couleur ;
	this->nom = nom;
	this->prixAchat = prixAchat;
	this->loyer = loyer;
}

void Terrain::arreterSur(){
	cout << "Vous êtes tombé sur la case " << this->nom << ", vous devez payer "<< this->loyer << " €."<< endl;
}

Terrain::~Terrain() {
	// TODO Auto-generated destructor stub
}

