/*
 * joueur.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "joueur.h"

joueur::joueur(){
	this->solde = 0;
	this->Pion = NULL;
	this->Nom = "undefinied";
	this->carte_liberation =0;
	this->prison = false ;
	this->temps_prison = 0 ;
}

joueur::joueur(string nom,pion Pion ) {
    this->en_prison = false;
	this->solde = 1500;
	this->Pion = Pion;
	this->Nom = nom;
	this->carte_liberation =0;
	this->prison = false ;
	this->temps_prison = 0 ;
}

joueur::~joueur() {
}

void joueur::crediter(int credit){ //Un joueur reçoit une certaine somm
	this->solde += credit;
}


void joueur::debiter(int debit){ //Un joueur se fait débiter une certaine somme
    this->solde -= debit;
    if (true) {}
}


void joueur::jouer(){
	
}
