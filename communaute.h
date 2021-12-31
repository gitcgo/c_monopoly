/*
 * communaute.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef COMMUNAUTE_H_
#define COMMUNAUTE_H_

#include "Case.h"
#include <iostream>
using namespace std;

class communaute: public Case {
	private :
		string nom ;
	public:
		communaute(string nom, Case* suivante);
		virtual ~communaute();
		void arreterSur() ;
};

#endif /* COMMUNAUTE_H_ */
