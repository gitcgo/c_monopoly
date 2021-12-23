/*
 * chance.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef CHANCE_H_
#define CHANCE_H_

#include "Case.h"

class chance: public Case {
private :
	string nom ;
public:
	chance();
	virtual ~chance();
	void arreterSur() ;
};

#endif /* CHANCE_H_ */
