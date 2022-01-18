/*
 * Plateau.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef PLATEAU_H_
#define PLATEAU_H_

#include "Case.h"

class Plateau {
private:
	Case* liste_case ;
public:
	Plateau();
	virtual ~Plateau();
	void creerCases();
	void lierCases();
};

#endif /* PLATEAU_H_ */
