/*
 * communaute.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "communaute.h"

communaute::communaute(string nom, Case* suivante):Case(nom,suivante) {
	// TODO Auto-generated constructor stub

}

communaute::~communaute() {
	// TODO Auto-generated destructor stub
}


void communaute::arreterSur(joueur* ptJoueur){
	int choixCarte = rand() % (15) ;
		joueur Joueur = *ptJoueur;
		Carte CarteTiree = this->pile_carte_communaute[choixCarte];
		cout << CarteTiree.getText() << endl;
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

		if ( CarteTiree.getText() == "Payez une amende de 10 euros ou tirez une carte chance" ) {
			cout << "Entrer 1 si vous voulez payer et 2 si vous voulez tirer une carte chance" << endl;
			string reponse ;
			cin >> reponse ;
			if (reponse == "1" ) {
				Joueur.debiter(10);
			}
			else{
				this->arreterSur(ptJoueur);
			}
		}
}
