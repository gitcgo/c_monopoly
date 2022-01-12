/*
 * propriete.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef PROPRIETE_H_
#define PROPRIETE_H_

#include "Case.h"

class propriete: public Case {
protected :
	string nom ;
	int loyer ;
	int prixAchat ;
public:
	propriete(string nom,int loyer , int prixAchat,Case* suivante);
	virtual ~propriete();
	void arreterSur() ;
	string getNom(){return this->nom;};
	void setNom(string Nom){this->nom=Nom;};
	int getLoyer(){return this->loyer;};
	void setLoyer(int loyer){this->loyer = loyer;};
	void setPrixAchat(int prix){this->prixAchat = prix;};
	int getPrixAchat(){return this->prixAchat;};
};

#endif /* PROPRIETE_H_ */
