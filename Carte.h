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
	Case* ptTeleportation;
	string text;
public:
	Carte(string text,int gain = 0 , int perte = 0 ,int deplacemenent= 0,Case* ptTeleportation =NULL);
	virtual ~Carte();
};

#endif /* CARTE_H_ */
