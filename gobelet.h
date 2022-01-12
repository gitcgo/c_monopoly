/*
 * gobelet.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef GOBELET_H_
#define GOBELET_H_
#include "de.h"

class gobelet {
private :
	de de1;
	de de2;
public:
	gobelet();
	virtual ~gobelet();
	int getValeur(){return (this->de1.getValeur() + this->de2.getValeur());};
	void lancer();
	bool Double();
};

#endif /* GOBELET_H_ */
