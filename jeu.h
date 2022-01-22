/*
 * jeu.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef JEU_H_
#define JEU_H_

class jeu {
protected:
	static int tourdejeu ;
public:
	jeu();
	virtual ~jeu();
	void compteur(){this->tourdejeu = this->tourdejeu + 1;};
	int getCompteur(){return this->tourdejeu;};
};

#endif /* JEU_H_ */
