/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 03/11/2025 15h31
* But du programme :
*   Calcule la moyenne de cinq nombres en utilisant que deux variables.
* Entrée : Les cinq nombres.
* Sortie : Affichage de la moyenne des nombres.
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

double moyenne(int nombre1, int nombre2) {
    return (nombre1 + nombre2) / 2 ;
}

int main() {
    double resultat = moyenne(input_nombre(), input_nombre());

    for (int i = 0; i < 3; i++) {
        resultat = moyenne(input_nombre(), resultat);
    }

    std::cout << resultat << std::endl;

    return 0;
}
