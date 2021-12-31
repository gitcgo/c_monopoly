/*
 * joueur.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "joueur.h"

joueur::joueur() {
	solde = 1500;
}

joueur::~joueur() {
}

void joueur::crediter(int credit){ //Un joueur reçoit une certaine somme
	
	solde = getSolde(); //On va cherche la solde possédée
	newSolde = solde + credit; //On y ajoute le crédit
	setSolde(newSolde); //On met à jour la solde du joueur
}


void joueur::debiter(int debit){ //Un joueur se fait débiter une certaine somme
	
	solde = getSolde(); //On va chercher sa solde possédée
	newSolde = solde - debit; //On y retranche la valeur indiquée
	setSolde(newSolde); //On met a jour la solde du joueur
}


void joueur::jouer(){
	
}
