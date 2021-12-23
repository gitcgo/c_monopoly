/*
 * prison.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef PRISON_H_
#define PRISON_H_

#include "Case.h"

class prison: public Case {
private :
	string nom ;
public:
	prison();
	virtual ~prison();
	void arreterSur() ;
};

#endif /* PRISON_H_ */
