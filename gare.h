/*
 * gare.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef GARE_H_
#define GARE_H_

#include "propriete.h"

class gare: public propriete {
private  :
	string nom ;
public:
	gare(string nom,int loyer , int prixAchat,Case* suivante);
	virtual ~gare();
	void setNom(string Nom){this->nom =Nom;};
	string getNom(){return this->nom;};
	void arreterSur();
};

#endif /* GARE_H_ */
