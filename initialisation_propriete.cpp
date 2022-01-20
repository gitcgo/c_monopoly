/*
 * initialisation_cartes.h
 *
 *  Created on: 12 janv. 2022
 *      Author: aveyronvictor
 */

#ifndef INITIALISATION_PROPRIETE
#define INITIALISATION_PROPRIETE


#include "Carte.h"
#include "depart.h"
#include "Plateau.h"
#include "propriete.h"
#include "couleur.h"
#include "Terrain.h"

couleur* initialisation_propriete () {
	couleur* liste_couleur = new couleur[9];

	// initialisation propriete d'un couleur
	int* listeLoyer1 = new int[6];

	listeLoyer1[0]= 2 ;
	listeLoyer1[1]= 10 ;
	listeLoyer1[2]= 30 ;
	listeLoyer1[3]= 60 ;
	listeLoyer1[4]= 160 ;
	listeLoyer1[5]= 250 ;

	Terrain test1 = Terrain("Boulevard de Belleville", listeLoyer1,60);

	int* listeLoyer2 = new int[6];
	listeLoyer2[0]= 4 ;
	listeLoyer2[1]= 20 ;
	listeLoyer2[2]= 60 ;
	listeLoyer2[3]= 120 ;
	listeLoyer2[4]= 320 ;
	listeLoyer2[5]= 450 ;

	Terrain test2 = Terrain("Rue Lecourbe", listeLoyer2,60);

	Terrain* liste_terrain = new Terrain[2];
	liste_terrain[0]= test1 ;
	liste_terrain[1]= test2 ;


	couleur Brun = couleur("brun",2,liste_terrain);
	test1.setCouleur(&(liste_couleur[0]));

	return liste_couleur ;
}





#endif /* INITIALISATION_CARTES_H_ */
