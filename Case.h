/*
 * Case.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef CASE_H_
#define CASE_H_

#include <iostream>
#include "joueur.h"

using namespace std;

class Case {
	protected :
        string nom;
        Case* suivante;
	public:
		Case(string nom, Case* suivante);
        Case(string nom);

        virtual ~Case();
        void arreterSur(joueur *joueur);
		string getNom(){return this->nom;};
		void setNom(string nom){this->nom = nom ;};
		Case* getSuivante(){return this->suivante;};
		void setSuivante(Case* suivante){this->suivante = suivante;};


};

#endif /* CASE_H_ */
