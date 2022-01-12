/*
 * de.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef DE_H_
#define DE_H_

class de {
private :
	int nbFaces;
	int valeur;
public:
	de();
	virtual ~de();
	int getNbfaces(){return this->nbFaces;};
	int getValeur(){return this->valeur;};
	void lancer(); // lance un dé et actualise la valuer du dé
};

#endif /* DE_H_ */
