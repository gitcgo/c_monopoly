/*
 * joueur.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "joueur.h"
#include "gobelet.h"

joueur::joueur(){
	this->solde = 1500;
	this->Nom = "undefinied";
	this->carte_liberation =0;
	this->prison = false ;
	this->temps_prison = 0 ;
}

joueur::joueur(string nom,pion Pion ) {
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
    if (solde<=0) {
        cout << Nom << " a fait banqueroute !" << endl;
    }
}

bool joueur::isOut(){
    return (solde<=0);
}

void joueur::jouer(){
    if (solde > 0) {
        if (prison) {

        }
        else {

        }
    }
}
