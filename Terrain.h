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
#include "couleur.h"

class Terrain: public propriete {
private :
	string nom;
	couleur* Couleur;
	int nMaison;
public:
	Terrain(string nom, int* ptLoyer, int prixAchat, string couleur=NULL, Case* suivante=NULL, joueur* ptProprietaire=NULL);
	virtual ~Terrain();
	void setNom(string Nom){this->nom =Nom;};
	string getNom(){return this->nom;};
	void arreterSur(joueur* ptJoueur);
	couleur* getCouleur(){return this->Couleur;};
	void setCouleur(couleur* Couleur){this->Couleur = Couleur;};
};

#endif /* TERRAIN_H_ */
