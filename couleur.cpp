/*
 * couleur.cpp
 *
 *  Created on: 20 janv. 2022
 *      Author: aveyronvictor
 */

#include "couleur.h"

couleur::couleur(string nom,int longueur, propriete* liste_propriete) {
	// TODO Auto-generated constructor stub
	this->nom = nom;
	this->longueur = longueur ;
	this->liste_propriete = liste_propriete;
}

couleur::~couleur() {
	// TODO Auto-generated destructor stub
}

bool couleur::check_monopole(joueur* ptJoueur){
	joueur Joueur = *ptJoueur;
	int longueur = this->longueur;
	for (int i = 0 ; i< longueur; i++) {
		propriete propriete_a_evaluer = this->liste_propriete[i]; // On check si c'est le même proprio pour tout la couleur
		joueur* proprietaire = propriete_a_evaluer.GetProprietaire();
		if ( proprietaire != ptJoueur  ){
			return false;
		}
	}
	return true;
}
