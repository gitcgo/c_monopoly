/*
 * chance.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef CHANCE_H_
#define CHANCE_H_

#include "Case.h"
#include "Carte.h"

class chance: public Case {
private :
	string nom ;
	Carte pile_carte_chance ;
public:
	chance(string nom, Case* suivante);
	virtual ~chance();
	void arreterSur() ;
};

#endif /* CHANCE_H_ */
