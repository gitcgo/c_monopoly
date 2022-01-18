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
	int getGain() {return this->gain;};
	int getPerte() {return this->perte;};
	int getDeplacement(){return this->deplacemenent;};
	Case* getTeleportation(){return this->ptTeleportation;};
	string getText(){return this->text;};
	Carte(string text,int gain = 0 , int perte = 0 ,int deplacemenent= 0,Case* ptTeleportation =NULL);
    Carte();
	virtual ~Carte();
};

#endif /* CARTE_H_ */
