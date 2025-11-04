/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 04/11/2025 9h28
* But du programme :
*   Détermine si un nombre est pair ou impair.
* Entrée : Le nombre à tester.
* Sortie : Affichage de la parité du nombre.
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

bool est_pair(int nombre) {
    return (nombre % 2) == 0;
}

int main() {
    const int nombre = input_nombre();

    if (est_pair(nombre)) {
        std::cout << "Le nombre " << nombre << " est pair !" << std::endl;
    } else {
        std::cout << "Le nombre " << nombre << " est impair !" << std::endl;
    }

    return 0;
}
