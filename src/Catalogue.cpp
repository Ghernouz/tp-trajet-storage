/*
 * Catalogue.cpp
 *
 *  Created on: 25 nov. 2016
 *      Author: augustin
 */

#include "Catalogue.h"
#include <iostream>
#include <cstring>
using namespace std;

Catalogue::Catalogue()
:NombreTrajets(0), it(1)
{
	Trajets = new Trajet*[1];
#ifdef MAP
	cout << "Appel au constructeur de <Catalogue>";
#endif
}

Catalogue::~Catalogue()
{
	delete [] Trajets;
#ifdef MAP
	cout << "Appel au destructeur de <Catalogue>";
#endif
}

void Catalogue::AddTrajet(Trajet* T)
{

    if(it==1){
        Trajets[0]=T;
        NombreTrajets++;
        it++;
    }else{
    	Trajet** trans =new Trajet*[NombreTrajets];
    	for(int i = 0; i<NombreTrajets;i++)
    	{
    		trans[i]=Trajets[i];
    	}
    	delete [] Trajets;
    	Trajets = new Trajet*[NombreTrajets+1];
    	for(int i = 0; i<NombreTrajets;i++)
    	{
    		Trajets[i]=trans[i];
    	}
    	Trajets[NombreTrajets]=T;
    	NombreTrajets++;
    	delete [] trans;
    }
}

void Catalogue::AfficherCatalogue()
{
	if (it==1){
		cout << "Il n'y a pas de trajets.\r\n";
	}
	else if (NombreTrajets == 1){
		cout << "Il y a 1 trajet :\r\n";
		Trajets[0]->Affiche();
	}
	else{
		cout << "Il y a " << NombreTrajets << " trajets :\r\n";
		for (int i = 0; i < NombreTrajets; i++){
			Trajets[i]->Affiche();
		}
	}
	cout << "\r\n";
}

void Catalogue::Recherchesimple(char* arrive, char* depart)
{
	if (it==1){
		cout << "Recherche impossible : Pas de trajets disponibles.\r\n";
	}else{
		for(int i = 0; i <NombreTrajets; i++){
			if(strcmp(Trajets[i]->getDepart(),depart)){
				if(strcmp(Trajets[i]->getArrivee(),arrive)){
					Trajets[i]->Affiche();
				}
			}
		}
	}
}
int Catalogue::Rechercheavance(char* depart,char* arrive, bool* &tab, Trajet ** &traj)
{
    for(int i=0 ;i<NombreTrajets ;i++ )
    {
        cout<<0;
        if(tab[i]==false)
        {
        if(strcmp(Trajets[i]->getDepart(),depart)==0)
        {cout<<1;
                tab[i]=true;
                depart = Trajets[i]->getArrivee();
                Catalogue::Rechercheavance(depart,arrive,tab, traj);
                }

        }
        }
}



