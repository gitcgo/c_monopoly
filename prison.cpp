/*
 * prison.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "prison.h"
#include "Case.h"
#include "joueur.h"

prison::prison(std::string nom, Case* suivante):Case(nom,suivante){

}


prison::~prison() {
	// TODO Auto-generated destructor stub
}

void prison::arreterSur(joueur* ptJoueur) {
	// Je pens eque ça sera géré avant dans le main

	bool incarcere = (*ptJoueur).getPrison();

    ;
}


