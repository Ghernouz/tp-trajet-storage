/*
 * TC.h
 *
 *  Created on: 18 nov. 2016
 *      Author: augustin
 */

#ifndef TC_H_
#define TC_H_

#include "Trajet.h"

class TC : public Trajet{
public:
	TC(Trajet** Etp, int ne);
	virtual ~TC();
	char* getDepart();
	char* getArrivee();
	void Add(Trajet* T);
	void Affiche();

protected:
	Trajet** Etapes;
	int nbetapes;
};

#endif /* TC_H_ */
