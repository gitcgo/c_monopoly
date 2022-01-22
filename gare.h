/*
 * gare.h
 *
 *  Created on: 23 dÃ©c. 2021
 *      Author: aveyronvictor
 */

#ifndef GARE_H_
#define GARE_H_

#include "propriete.h"
#include "gares.h"

class gare: public propriete {
private  :
	gares liste_gares ;

public:
	gare();
	gare(string nom, int prixAchat=200, Case* suivante=NULL, joueur* ptProprietaire=NULL,int* ptLoyer = NULL,gares liste_gares = NULL);
	virtual ~gare();
	void setNom(string Nom){this->nom =Nom;};
	void setListeGares(gares listes){this->liste_gares = listes ; };
	void arreterSur(joueur* ptJoueur);
};

#endif /* GARE_H_ */
