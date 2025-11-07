/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 05/11/2025 10h29
* But du programme :
*    Inverse l'ordre des chiffres d'un nombre.
* Entrée : Le nombre à modifier.
* Sortie : Affiche le nouveau nombre crée.
*/

#include <iostream>
#include <limits>

int input_nombre() {
    int nombre;

    while (true) {
        std::cout << "Entrez un nombre : ";

        if (!(std::cin >> nombre)) {
            std::cerr << "Entrée invalide !" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            return nombre;
        }
    }
}

int inverse_chiffres(int nombre) {
    int inverse = 0;
    while (nombre != 0) {
        if (inverse) {
            inverse *= 10;
        }
        inverse += nombre % 10;
        nombre /= 10;
    }
    return inverse;
}

int main() {
    const int nombre = input_nombre();

    std::cout << "Le nombre d'origine est :" << nombre << std::endl;

    const int nombre_inverse = inverse_chiffres(nombre);

    std::cout << "Le nombre inversé est :" << nombre_inverse << std::endl;


    return 0;
}