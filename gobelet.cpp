/*
 * gobelet.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "gobelet.h"

gobelet::gobelet() {
	this->de1 = de();
	this->de2 = de();
}

gobelet::~gobelet() {
	// TODO Auto-generated destructor stub
}

void gobelet::lancer(){
	this->de1.lancer();
	this->de2.lancer();
}

bool gobelet::Double() {
	return (this->de1.getValeur() == this->de2.getValeur());
}
