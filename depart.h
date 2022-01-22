/*
 * depart.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef DEPART_H_
#define DEPART_H_

#include "Case.h"

class depart: public Case {
private :
	string nom ;
public:
	depart(string nom,Case* suivante=NULL);
	virtual ~depart();
	void arreterSur(joueur *ptjoueur) ;
};

#endif /* DEPART_H_ */
