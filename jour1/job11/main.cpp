/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 06/11/2025 10h06
* But du programme :
*   Échange la valeur de deux entiers sans utiliser de pointeurs.
* Entrée : Les deux nombres.
* Sortie : Affichage des nouvelles valeurs des nombres.
*/

#include <iostream>
#include <limits>

int input_number() {
    int number;

    while (true) {
        std::cout << "Entrez un nombre : ";

        if (!(std::cin >> number)) {
            std::cerr << "Entrée invalide !" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            return number;
        }
    }
}

void swap_values(int& number1, int& number2) {
    const int buffer = number1;
    number1 = number2;
    number2 = buffer;
}

int main() {
    int number1 = input_number();
    int number2 = input_number();

    std::cout << "Avant échange :" << std::endl;
    std::cout << "Nombre 1 = " << number1 << std::endl;
    std::cout << "Nombre 2 = " << number2 << std::endl;

    swap_values(number1, number2);

    std::cout << "Après échange :" << std::endl;
    std::cout << "Nombre 1 = " << number1 << std::endl;
    std::cout << "Nombre 2 = " << number2 << std::endl;


    return 0;
}
