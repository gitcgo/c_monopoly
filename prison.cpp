/*
 * prison.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "prison.h"

prison::prison(string nom, Case* suivante):Case(nom,suivante){

}


prison::~prison() {
	// TODO Auto-generated destructor stub
}

void prison::arreterSur(joueur* ptJoueur) {
	// Je pens eque ça sera géré avant dans le main
	joueur Joueur = *ptJoueur ;
	bool incarcere = Joueur.getPrison();

    ;
}


