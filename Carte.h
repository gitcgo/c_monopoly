/*
 * Cartechance.h
 *
 *  Created on: 12 janv. 2022
 *      Author: aveyronvictor
 */

#ifndef CARTE_H_
#define CARTE_H_

#include "Case.h"

class Carte {
private :
	int gain ;
	int perte ;
	int deplacemenent;
	Case teleportation;
public:
	Carte(int gain, int perte,int deplacemenent,Case teleportation);
	virtual ~Carte();
};

#endif /* CARTE_H_ */
