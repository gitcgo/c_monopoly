/*
 * Terrain.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef TERRAIN_H_
#define TERRAIN_H_

#include "propriete.h"

class Terrain: public propriete {
private :
	string nom;
	string couleur ;
public:
	Terrain(string nom,int loyer , int prixAchat,string couleur, Case* suivante);
	virtual ~Terrain();
	void setNom(string Nom){this->nom =Nom;};
	string getNom(){return this->nom;};
	void arreterSur();
};

#endif /* TERRAIN_H_ */
