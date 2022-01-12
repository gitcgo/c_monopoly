/*
 * prison.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "prison.h"

prison::prison() :
    Case("Prison")
	// TODO Auto-generated constructor stub
{}


prison::~prison() {
	// TODO Auto-generated destructor stub
}

void prison::arreterSur(joueur *joueur) {
    (joueur->getPion()).setPosition(case_prison);
}


