/*
 * gares.h
 *
 *  Created on: 22 janv. 2022
 *      Author: aveyronvictor
 */

#ifndef GARES_H_
#define GARES_H_

#include "gare.h"

class gares {
private :
	gare* liste_gares ;
public:
	gares(gare* liste_gare=NULL);
	virtual ~gares();
	int checkMonopole(joueur* ptJoueur);
};

#endif /* GARES_H_ */
