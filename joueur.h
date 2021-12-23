/*
 * joueur.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef JOUEUR_H_
#define JOUEUR_H_
#include <iostream>
#include "pion.h"
#include "Case.h"
using namespace std;

class joueur {
	private :
		string Nom;
		pion Pion ;
		int solde ;
	public:
		joueur();
		virtual ~joueur();
		string getNom(){return this->Nom;};
		void setPion(pion Pion){this->Pion =Pion;};
		pion getPion(){return this->Pion;};
		void jouer();
		void setSolde(int solde ){this->solde=solde;};
		int getSolde(){return this->solde;};
		void crediter(int credit);
		void debiter(int debit);
};

#endif /* JOUEUR_H_ */
