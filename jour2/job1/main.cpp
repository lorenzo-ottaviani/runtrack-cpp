/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 20/11/2025 07h50
* But du programme :
*    Fait communiquer entre eux des pingouins via leurs déplacements.
* Entrée : ∅
* Sortie : les déplacements des pingouins.
*/

#include <iostream>

#include "pingouin.hpp"

int main() {
    // Création des pingouins
    Pingouin papa_pingouin(4, 9);
    Pingouin bebe_pingouin(1, 2);

    // Modifier la position initiale
    papa_pingouin.set_position_x(5);
    papa_pingouin.set_position_y(5);

    bebe_pingouin.set_position_x(2);
    bebe_pingouin.set_position_y(2);

    // Présentations
    std::cout << "\nPapa pingouin va se présenter !" << std::endl;
    papa_pingouin.se_presenter();

    std::cout << "\nBébé pingouin va se présenter aussi !" << std::endl;
    bebe_pingouin.se_presenter();

    return 0;
}
