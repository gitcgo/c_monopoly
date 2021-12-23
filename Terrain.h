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
	Terrain();
	virtual ~Terrain();
	void setNom(string Nom){this->nom =Nom;};
	string getNom(){return this->nom;};
	void arreterSur();
};

#endif /* TERRAIN_H_ */
