/*
 * Trajet.h
 *
 *  Created on: 18 nov. 2016
 *      Author: augustin
 */

#ifndef TRAJET_H_
#define TRAJET_H_

class Trajet {
public:
	Trajet();
	virtual ~Trajet();
	virtual void Affiche() = 0;
	virtual char* getDepart() = 0;
	virtual char* getArrivee() = 0;
};

#endif /* TRAJET_H_ */
