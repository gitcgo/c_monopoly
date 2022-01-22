/*
 * gare.h
 *
 *  Created on: 23 dÃ©c. 2021
 *      Author: aveyronvictor
 */

#ifndef GARE_H_
#define GARE_H_

#include "ensemble_gare.h"
#include "propriete.h"

class gare: public propriete {
private  :
	ensemble_gare* ptEnsembleGares ;
public:
	gare();
	gare(string nom, int prixAchat=200, Case* suivante=NULL, joueur* ptProprietaire=NULL,int* ptLoyer = NULL,ensemble_gare* ptEnsembleGares = NULL);
	virtual ~gare();
	void setNom(string Nom){this->nom =Nom;};
	void setEnsembleGares(ensemble_gare* ptEnsembleGares){this->ptEnsembleGares = ptEnsembleGares ; };
	void arreterSur(joueur* ptJoueur);
};

#endif /* GARE_H_ */
