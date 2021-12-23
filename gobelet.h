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
	de des;
public:
	gobelet();
	virtual ~gobelet();
	int getValeur();
	bool Double();
};

#endif /* GOBELET_H_ */
