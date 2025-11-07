/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 05/11/2025 10h33
* But du programme :
*    Vérifie si une année est bissextile.
* Entrée : L'année à tester.
* Sortie : Affiche si l'année est bissextile ou pas dans le terminal.
*/

#include <iostream>
#include <limits>

int input_nombre() {
    int nombre;

    while (true) {
        std::cout << "Entrez une année : ";

        if (!(std::cin >> nombre)) {
            std::cerr << "Entrée invalide !" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            return nombre;
        }
    }
}

const char* verifie_bissextile (int an) {
    if ((an % 4 == 0) && (an % 100 != 0 || an % 400 == 0)) {
        return "bissextile";
    } else {
        return "normale";
    }
}

int main() {
    int an = input_nombre();

    const char* resultat = verifie_bissextile(an);
    std::cout << "L'année " << an << " est : " << resultat << std::endl;


    return 0;
}
