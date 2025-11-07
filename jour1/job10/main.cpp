/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 05/11/2025 16h24
* But du programme :
*    Détermine le plus petit élément d'un tableau de pointeurs d'entiers.
* Entrée : ∅
* Sortie : Affiche le nombre.
*/

#include <iostream>

int minimum_tableau(int* tableau[], int taille) {
    int* const* p = tableau;
    int* const* fin = tableau + taille;

    int minimum = **p;

    for (; p < fin; ++p) {
        if (**p < minimum) {
            minimum = **p;
        }
    }

    return minimum;
}

int main() {
    int a = 8; int b = 22; int c = 7; int d = 4; int e = 15;
    int taille = 5;

    int* tableau[taille] = {&a, &b, &c, &d, &e};

    int minimum = minimum_tableau(tableau, taille);

    std::cout << "Le plus petit nombre du tableau est " << minimum << "." << std::endl;

    return 0;
}
