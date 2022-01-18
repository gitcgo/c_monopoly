/*
 * compagnie.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef COMPAGNIE_H_
#define COMPAGNIE_H_

#include "propriete.h"
#include "gobelet.h"
#include "joueur.h"

class compagnie: public propriete {
private :
	string nom;
	joueur* Propriétaire;
public:
	compagnie(string nom,int loyer , int prixAchat,Case* suivante);
	virtual ~compagnie();
	void setNom(string Nom){this->nom =Nom;};
	string getNom(){return this->nom;};
	void arreterSur(joueur* Joueur, gobelet Gobelet);
};

#endif /* COMPAGNIE_H_ */
