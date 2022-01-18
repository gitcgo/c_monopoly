/*
 * chance.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "chance.h"
#include "initialisation_chance.h"
#include <stdlib.h>

chance::chance(string nom, Case* suivante):Case(nom,suivante) {
	this->pile_carte_chance = NULL;

}

chance::~chance() {
	// TODO Auto-generated destructor stub
}

void chance::arreterSur(joueur* ptJoueur){
	int choixCarte = rand() % (15) ;
	joueur Joueur = *ptJoueur;
	Carte CarteTiree = this->pile_carte_chance[choixCarte];
	Joueur.crediter(CarteTiree.getGain());
	Joueur.debiter(CarteTiree.getPerte());
	if ( CarteTiree.getDeplacement() > 0 ) {
		pion Pion = Joueur.getPion() ;
		Pion.deplacer(CarteTiree.getDeplacement()*(-1));
	}
	if ( CarteTiree.getText() == "Conservez cette carte pour pouvoir être libéré de prison") {
		Joueur.setCartePrison(Joueur.getCartePrison());
	}
	if ( CarteTiree.getText() == "Payer les réparations de vos maisons : 25 € / Maison , 100 € /Hôtel" ) {
		Joueur.crediter(0); // A remplacer qd hôtel sera là et tout
	}

}
