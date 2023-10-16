// fonction.cpp

#include <string>
#include <cstdlib>
#include <iostream>

void melangerLettres(std::string* mot)
{
    std::string melange;
    int position(0);
    std::cout << *mot << std::endl;

    // Tant qu'on n'a pas extrait toutes les lettres du mot
    while (mot->size() != 0)
    {
        // On choisit un numéro de lettre au hasard dans le mot
        position = rand() % mot->size();
        // On ajoute la lettre dans le mot mélangé
        melange += mot->at(position);
        // On retire cette lettre du mot mystère
        // Pour ne pas la prendre une deuxième fois
        mot->erase(position, 1);
    }
    // On assigne le mot mélangé au pointeur
    *mot = melange;
}
