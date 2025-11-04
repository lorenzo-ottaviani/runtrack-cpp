/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 03/11/2025 14h42
* But du programme :
*    Multiplie deux nombres.
* Entrée : Les deux nombres.
* Sortie : Affichage du produit des deux nombres.
*/

#include <iostream>
#include <limits>

double input_nombre() {
    double nombre;

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

double multiplication(double nombre1, double nombre2) {
    return nombre1 * nombre2;
}

int main() {
    const double nombre1 = input_nombre();
    const double nombre2 = input_nombre();

    const double produit = multiplication(nombre1, nombre2);

    std::cout << produit << std::endl;

    return 0;
}
