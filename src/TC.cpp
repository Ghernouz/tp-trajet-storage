/*
 * TC.cpp
 *
 *  Created on: 18 nov. 2016
 *      Author: augustin
 */

#include "TC.h"
#include <iostream>

using namespace std;

TC::TC(Trajet** Etp, int ne)
:nbetapes(ne)
{
	Etapes = new Trajet*[ne];
	for (int i = 0; i < ne; i++){
		Etapes[i] = Etp[i];
	}
#ifdef MAP
	cout << "Appel au constructeur de <TrajetComplexe>";
#endif
}

TC::~TC()
{
	delete [] Etapes;
#ifdef MAP
	cout << "Appel au destructeur de <TrajetComplexe>";
#endif
}

void TC::Affiche()
{
	cout << "De " << Etapes[0]->getDepart() << " à " << Etapes[nbetapes-1]->getArrivee() << " :\r\n";
	for (int i = 0; i < nbetapes; i++){
		cout << "	-";
		Etapes[i]->Affiche();
	}
}
void TC::Add(Trajet* T){
    Trajet** trans=new  Trajet*[nbetapes];
    for(int i =0; i<nbetapes;i++){
        trans[i]=Etapes[i];
    }
    delete [] Etapes;
    Etapes = new Trajet*[nbetapes+1];
        for(int i = 0; i<nbetapes;i++)
    {
        Etapes[i]=trans[i];
    }

    Etapes[nbetapes]=T;
   nbetapes++;
    delete [] trans;

}

char* TC::getDepart()
{
	return Etapes[0]->getDepart();
}

char* TC::getArrivee()
{
	return Etapes[nbetapes-1]->getArrivee();
}
