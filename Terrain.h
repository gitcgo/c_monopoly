/*
 * Terrain.h
 *
 *  Created on: 23 dÃ©c. 2021
 *      Author: aveyronvictor
 */

#ifndef TERRAIN_H_
#define TERRAIN_H_
#include <string>
#include "propriete.h"

class Terrain: public propriete {
private :
	string nom;
	string couleur;
	int nMaison;
public:
	Terrain(string nom, int prixAchat, string couleur, Case* suivante, joueur* proprietaire);
	virtual ~Terrain();
	void setNom(string Nom){this->nom =Nom;};
	string getNom(){return this->nom;};
	void arreterSur(joueur* ptJoueur);
};

#endif /* TERRAIN_H_ */
