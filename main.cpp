#include <iostream>
#include "TS.h"
#include "TC.h"
#include <cstdlib>
#include "Catalogue.h"

using namespace std;

int menuPrincipal();
void ajoutTrajet();
void rechercheSimple();

Catalogue catalogue;

int main()
{
	int choice = 0;
	//system("clear");

	while(choice != 5){
		choice = menuPrincipal();
		if(choice == 1){
			ajoutTrajet();
		}else if(choice == 2){
			//system("clear");
			catalogue.AfficherCatalogue();
		}else if(choice == 3){
			rechercheSimple();
		}else if(choice == 4){

		}
	}

	//system("clear");
	cout << "Au revoir.\r\n";

	return 1;
}

int menuPrincipal()
{
	int ret;
	cout << "Entrez un nombre :\r\n";
	cout << "1 : Ajouter un trajet simple.\r\n";
	cout << "2 : Afficher le catalogue.\r\n";
	cout << "3 : Effectuer une recherche simple.\r\n";
	cout << "4 : Effectuer une recherche complexe.\r\n";
	cout << "5 : Exit.\r\n";
	cin >> ret;
	while(ret != 1 && ret != 2 && ret != 3 && ret != 4 && ret != 5){
		system("clear");
		cout << "Entrée non valide, veuillez recommencer :\r\n";
		cout << "\r\n";
		cout << "1 : Ajouter un trajet.\r\n";
		cout << "2 : Afficher le catalogue.\r\n";
		cout << "3 : Effectuer une recherche simple.\r\n";
		cout << "4 : Effectuer une recherche complexe.\r\n";
		cout << "5 : Exit.\r\n";
		cin >> ret;
	}

	return ret;
}

void ajoutTrajet()
{
	//system("clear");
	TS** T = new TS*[1];
	char* VD= new char[15];
	char* VA= new char[15];
	int MOYTRANS;
	int nbTraj = 0;
	cout << "Entrez le nom de la ville de départ :\r\n";
	cin >> VD;
	cout << "Entrez le nom de la ville d'arrivée :\r\n";
	cin >> VA;
	cout << "Entrez le moyen de transport utilisé :\r\n";
	cout << "1 : Voiture.\r\n";
	cout << "2 : Train.\r\n";
	cout << "3 : Bateau.\r\n";
	cout << "4 : Avion.\r\n";
	cin >> MOYTRANS;
	T[0] = new TS(VD, VA, MOYTRANS);
	nbTraj++;
	catalogue.AddTrajet(T[0]);
	cout << "\r\n";
	delete [] T;
}

void rechercheSimple()
{
//    catalogue.Recherchesimple();
}
