/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 04/11/2025 9h59
* But du programme :
*   Échange la valeur de deux entiers.
* Entrée : Les deux nombres.
* Sortie : Affichage des nouvelles valeurs des nombres.
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

void inverse_valeur(int &nombre1, int &nombre2) {
    const int tampon = nombre1;
    nombre1 = nombre2;
    nombre2 = tampon;
}

int main() {
    int nombre1 = input_nombre();
    int nombre2 = input_nombre();

    std::cout << "Avant échange :" << std::endl;
    std::cout << "Nombre 1 = " << nombre1 << std::endl;
    std::cout << "Nombre 2 = " << nombre2 << std::endl;

    inverse_valeur(nombre1, nombre2);

    std::cout << "Après échange :" << std::endl;
    std::cout << "Nombre 1 = " << nombre1 << std::endl;
    std::cout << "Nombre 2 = " << nombre2 << std::endl;


    return 0;
}
