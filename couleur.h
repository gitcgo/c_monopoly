/*
 * couleur.h
 *
 *  Created on: 20 janv. 2022
 *      Author: aveyronvictor
 */

#ifndef COULEUR_H_
#define COULEUR_H_

#include "propriete.h"
#include "joueur.h"

class couleur {
private:
	propriete* liste_propriete ;
	string nom;
	int longueur ;
public:
	couleur(string nom,int longueur, propriete* liste_propriete= NULL);
	propriete* getListePropriete(){return this->liste_propriete;};
	string getNom(){return this->nom;};
	int getLongueur(){return this->longueur;};
	bool check_monopole(joueur* ptJoueur);
	virtual ~couleur();
};

#endif /* COULEUR_H_ */
