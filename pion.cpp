/*
 * Pion.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "pion.h"

pion::pion(string nom) {
	this->ptJoueur =NULL;
	this->ptPosition = nom; //Le pion est forcément situé à la case départ lors de sa création. On include "case" dans pion.h et la case depart est fille de Case donc pas de soucis
	nom = " Bob "; //Le Joueur est sensé donner un nom à son pion, sinon moi j'aime bien l'appeler Bob
			// Je ne mets pas de joueur par défaut, ça n'a pas vraiment de sens. Encore une fois il faudra que les joueurs définissent à quel Joueur appartient le pion
}

pion::~pion() {
	// Destructeur automatique. Le pion reste utile jusqu'à la toute fin du jeu. 
}	

pion::deplacer(){
	
}
