/*
 * gare.h
 *
 *  Created on: 23 dÃ©c. 2021
 *      Author: aveyronvictor
 */

#ifndef GARE_H_
#define GARE_H_

#include "propriete.h"

class gare: public propriete {
private  :
	string nom ;
	int nGare;
public:
	gare(string nom, int ptLoyer, int prixAchat, Case* suivante);
	virtual ~gare();
	void setNom(string Nom){this->nom =Nom;};
	void arreterSur(joueur* ptJoueur);
};

#endif /* GARE_H_ */
