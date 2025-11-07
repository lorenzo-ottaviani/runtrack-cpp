/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 05/11/2025 15h34
* But du programme :
*    Détermine le plus petit élément d'un tableau d'entiers.
* Entrée : ∅
* Sortie : Affiche le nombre.
*/

#include <iostream>

int minimum_tableau(int tableau[], int taille) {
    int minimum = tableau[0];

    for (int i = 1; i < taille; i++) {
        if (tableau[i] < minimum) {
            minimum = tableau[i];
        }
    }

    return minimum;
}

int main() {
    int taille = 5;

    int tableau[taille] = {8, 22, 7, 4, 15};

    int minimum = minimum_tableau(tableau, taille);

    std::cout << "Le plus petit nombre du tableau est " << minimum << "." << std::endl;

    return 0;
}
