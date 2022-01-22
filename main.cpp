//============================================================================
// Name        : tp6-test.cpp
// Author      : vory
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "banque.h"
#include "Case.h"
#include "banque.h"
#include "chance.h"
#include "compagnie.h"
#include "de.h"
#include "compagnie.h"
#include "depart.h"
#include "gobelet.h"
#include "jeu.h"
#include "joueur.h"
#include "pion.h"
#include "gare.h"
#include "prison.h"
#include "Plateau.h"
#include "Terrain.h"


using namespace std;


int main() {

	cout << "Bienvenue dans le logiciel Monopolyde ORY Victor , CHAPLAIN Nicolas, GOURC Corenton" << endl ;
	int nmbrJoueur ;
	cout << "Veuiller entrer le nombre de joueur : " << endl ;
	cin >> nmbrJoueur ;
	joueur* listeJoueur = new joueur[nmbrJoueur];

	// Création du plateau de manière à pouvoir placer le pion sur la carte départ



	for (int i = 0 ; i < nmbrJoueur ; i ++ ) {

		string nomJoueur;
		cout << "Comment s'appelle le Joueur " << (string) i << "?" << endl;
		cin << nomJoueur ;
		string nomPion ;
		cout << "Entrer le nom du pion que vous voulez sélectionner pour le jouer numéro " << (string) nmbrJoueur << endl ;
		cin >> nomPion ;

		pion* ptPion = new pion(nomPion);
		pion Pion = *ptPion ;

		joueur* ptJoueur = new joueur(nomJoueur,Pion);
		joueur Joueur = *ptJoueur;

		listeJoueur[i] = Joueur;
		Pion.setJoueur(&Joueur);
		Pion.setPosition(truc);
	}

	jeu Jeu = jeu();


	// initialisation de la case des joueurs

	// On commence la partie

	static gobelet Gobelet = gobelet();



	while (Jeu.getCompteur() < 100 )  {
		for (int i = 0 ; i < nmbrJoueur ; i ++){
			joueur Joueur = listeJoueur[i];
			Joueur.jouer();
		}
	}

	return 0;
}
