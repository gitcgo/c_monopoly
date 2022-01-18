/*
 * compagnie.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "compagnie.h"

compagnie::compagnie(string nom,int loyer , int prixAchat,Case* suivante):propriete(nom,loyer,prixAchat,suivante) {
	// TODO Auto-generated constructor stub
	this->Propriétaire =NULL;
}

compagnie::~compagnie() {
	// TODO Auto-generated destructor stub
}


void compagnie::arreterSur(joueur* Joueur, gobelet Gobelet) {


}
