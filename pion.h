/*
 * Pion.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef PION_H_
#define PION_H_

#include <iostream>
#include "Case.h"
#include "joueur.h"

using namespace std;


class pion {
	private :
		joueur Joueur ; //Nom du joueur associé au Pion
		Case Position ; //Position du pion sur le plateau
		string nom ; //Nom du pion
	public:
		pion(); //Constructeur du pion
		virtual ~pion(); //Destructeur du pion, inutile s'il reste jusqu'à la fin de la partie mais on le laisse pour la beauté du geste
	
		void setJoueur ( joueur Joueur ) {this->Joueur = Joueur;}; //Définis quel joueur possède ce pion
		joueur getJoueur () { return this->Joueur; }; //Return quel joueur possède ce pion
	
		void setPosition(Case truc) {this->Position = truc;}; //Définis la case sur laquelle se situe le pion
		Case getPosition() {return this->Position;}; //Return la position où se trouve le pion
	
		void setNom(string nom){this->nom = nom}; //Définis le nom du pion
		string getNom(){return this->nom;}; //Return le nom du Pion
	
		void deplacer(); //Déplace le pion sur le plateau
		void setPosition(Case truc) {this->Position = truc;}; //Définis la case sur laquelle se situe le pion
};

#endif /* PION_H_ */
