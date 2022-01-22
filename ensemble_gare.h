/*
 * gares.h
 *
 *  Created on: 22 janv. 2022
 *      Author: aveyronvictor
 */

#ifndef ENSEMBLE_GARE_H_
#define ENSEMBLE_GARE_H_

#include "gare.h"
#include "joueur.h"



class ensemble_gare {
private :
	gare* liste_gare ;
public:
	ensemble_gare(gare* liste_gare= NULL);
	virtual ~ensemble_gare();
	void setListeGare(gare* liste_gare=NULL){this->liste_gare=liste_gare;};
	int checkMonopole(joueur* ptJoueur);
};

#endif /* ENSEMBLE_GARE_H_ */
