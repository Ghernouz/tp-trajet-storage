/*
 * Catalogue.h
 *
 *  Created on: 25 nov. 2016
 *      Author: augustin
 */

#ifndef CATALOGUE_H_
#define CATALOGUE_H_

#include "Trajet.h"

class Catalogue {
public:
	Catalogue();
	virtual ~Catalogue();
	void AddTrajet(Trajet*);
	void AfficherCatalogue();
	void Recherchesimple(char* arrive,char* depart);
    int Rechercheavance(char* arrive,char* depart, bool* &tab, Trajet ** &traj);

protected:
	int NombreTrajets;
	Trajet** Trajets;
    int it;
};

#endif /* CATALOGUE_H_ */
