/*
 * TS.h
 *
 *  Created on: 18 nov. 2016
 *      Author: augustin
 */

#ifndef TS_H_
#define TS_H_

#include "Trajet.h"

class TS : public Trajet {
public:
	TS(char* VD, char* VA, int T);
	virtual ~TS();
	char* getDepart();
	char* getArrivee();
	void Affiche();

protected:
	int Transport;
	char* villeArrivee;
	char* villeDepart;
};

#endif /* TS_H_ */
