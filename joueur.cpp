/*
 * joueur.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "joueur.h"

joueur::joueur(string nom,pion Pion ) {
	this->solde = 1500;
	this->Pion = Pion;
	this->Nom = nom;
}

joueur::~joueur() {
}

void joueur::crediter(int credit){ //Un joueur reçoit une certaine somme
	
	solde = getSolde(); //On va cherche la solde possédée
	int newSolde = solde + credit; //On y ajoute le crédit
	setSolde(newSolde); //On met à jour la solde du joueur
}


void joueur::debiter(int debit){ //Un joueur se fait débiter une certaine somme
	
	solde = getSolde(); //On va chercher sa solde possédée
	int newSolde = solde - debit; //On y retranche la valeur indiquée
	setSolde(newSolde); //On met a jour la solde du joueur
}


void joueur::jouer(){
	
}
