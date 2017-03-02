/*
 * TS.cpp
 *
 *  Created on: 18 nov. 2016
 *      Author: augustin
 */

#include "TS.h"
#include <iostream>

using namespace std;

TS::TS(char* VD, char* VA, int T)
:villeDepart(VD),
 villeArrivee(VA),
 Transport(T)
{
#ifdef MAP
	cout << "Appel au constructeur de <TrajetSimple>";
#endif
}

TS::~TS()
{
#ifdef MAP
	cout << "Appel au destructeur de <TrajetSimple>";
#endif
}

void TS::Affiche()
{
	cout << "De " << villeDepart << " à " << villeArrivee;
	if (Transport == 1) cout << " en voiture\r\n";
	else if (Transport == 2) cout << " en train\r\n";
	else if (Transport == 3) cout << " en bateau\r\n";
	else cout << " en avion\r\n";
}

char* TS::getDepart()
{
	return villeDepart;
}

char* TS::getArrivee(){
	return villeArrivee;
}
