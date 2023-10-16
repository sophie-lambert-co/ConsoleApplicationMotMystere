
//
	// main.cpp
	// Priority
	//
	// Created by Ranga Gonnage on 15/12/2021.
	//

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
#include "fonction.hpp"

using namespace std;

int main()
{
	SetConsoleOutputCP(65001);
	string motMystere, motUtilisateur, * motMelange(nullptr);


	//Initialisation des nombres aléatoires
	srand(time(0));

	//1 : On demande de saisir un mot
	cout << "Saisissez un mot à l’abri des regards : ";
	cin >> motMystere;

	motMelange = new string(motMystere);

	//2 : On récupère le mot avec les lettres mélangées dans motMelange
	melangerLettres(motMelange);

	//3 : On demande à l'utilisateur quel est le mot mystère
	while (motUtilisateur != motMystere)
	{
		cout << endl << "Quel est ce mot ? " << *motMelange << endl;
		cin >> motUtilisateur;

		if (motUtilisateur == motMystere)
		{
			cout << "Bravo !" << endl;
		}
		else
		{
			cout << "Ce n'est pas le mot !" << endl;
		}
	}
	//On recommence tant qu'il n'a pas trouvé

	delete motMelange;

	return 0;
}



