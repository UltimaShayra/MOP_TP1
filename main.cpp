#include<windows.h>

#include <stdio.h>
#include <iostream>

#include "CMaison.h"
#include "COuverture.h"

using namespace std;

int main()
{
	int nb_facade, nombre_de_fenetre, nombre_de_porte, tmp;
	float hauteur, largeur, taille_pignon = 0, hauteur_ouverture, largeur_ouverture;
	bool possede_pignon = false;


	cout << "Saisir le nombre de facades : " << endl;
	cin >> nb_facade;
	CMaison m(nb_facade);
	
	for (int i = 0; i<nb_facade; i++)
	{
		cout << "Saisir la hauteur de la facade" << endl;
		cin >> hauteur;
		cout << "Saisir la largeur de la facade" << endl;
		cin >> largeur;
		cout << "Y a t il un pignon ? \t [1.Oui]\t [0.Non]" << endl;
		cin >> tmp;
		possede_pignon = tmp;

		if (possede_pignon)
		{
			cout << "Quelle est sa hauteur ?" << endl;
			cin >> taille_pignon;
		}
		
		m.addFacade(CFacade(hauteur, largeur, possede_pignon, taille_pignon));

		cout << "Combien y a t il de fenetres ?" << endl;
		cin >> nombre_de_fenetre;
		
		for (int j = 0; j<nombre_de_fenetre; j++)
		{
			cout << "Quelle est la largeur de la fenetre " << j << " ?" << endl;
			cin >> largeur_ouverture;
			cout << "Quelle est sa hauteur de la fenetre " << j << " ?" << endl;
			cin >> hauteur_ouverture;
			m.GetFacade(i).addOuverture(CFenetre(hauteur_ouverture, largeur_ouverture));
		}

		cout << "\nCombien y a t il de portes ?" << endl;
		cin >> nombre_de_porte;
		
		for (int k = 0; k<nombre_de_porte; k++)
		{
			cout << "Quelle est la largeur de la porte " << k << " ?" << endl;
			cin >> largeur_ouverture;
			cout << "Quelle est sa hauteur de la porte " << k << " ?" << endl;
			cin >> hauteur_ouverture;
			m.GetFacade(i).addOuverture(CPorte(hauteur_ouverture, largeur_ouverture));
		}
	}

	cout << "\nLa surface de la face est de : " << m.calculerSurface() << endl;

	Sleep(10000);

	return 0;
}

