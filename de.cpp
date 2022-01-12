/*
 * de.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "de.h"
#include <stdlib.h>

de::de() {
	this->nbFaces = 6 ;
	this->valeur = 0 ;
}

de::~de() {
	// TODO Auto-generated destructor stub
}

void de::lancer() {
	this->valeur = rand() % (this->nbFaces - 1) + 1; // On lance un dé et on actualise la valeur du dé

}
