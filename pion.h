/*
 * Pion.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef PION_H_
#define PION_H_

#include <iostream>
#include "joueur.h"
#include "Case.h"
using namespace std;

class pion {
	private :
		joueur Joueur ;
		Case Position ;
		string nom ;
	public:
		pion();
		virtual ~pion();
		void setJoueur ( joueur Joueur ) {this->Joueur = Joueur;};
		joueur getJoueur () { return this->Joueur; };
		Case getPosition() {return this->Position;};
		void deplacer();
		void setNom(string nom);
		void setPosition(Case truc) {this->Position = truc;};
};

#endif /* PION_H_ */
