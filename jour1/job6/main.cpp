/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 04/11/2025 10h34
* But du programme :
*    Calcule le prix TTC d'un kilo de carottes.
* Entrées : La quantité de carottes, le prix HT au kilo et la TVA.
* Sortie : Affiche le prix TTC dans le terminal.
*/

#include <iostream>
#include <cmath>

double prix_TTC (double prix_HT, int TVA, double quantite) {
    double prix_HT_corrige = std::round(prix_HT * 100.0) / 100.0;  // Arrondi au centime d'euros.
    double quantite_corrige = std::round(quantite * 1000.0) / 1000.0;  // Arrondi au millième.

    double prix = prix_HT_corrige * quantite_corrige * (1 + (TVA / 100.0));

    return prix;
}

int main() {
    double a;
    std::cout << "Indique le prix HT pour un kg de carottes : " << std::flush;
    if (!(std::cin >> a)) {
        std::cerr << "Erreur : vous devez entrer un nombre !" << std::endl;
        return 1;
    }

    int b;
    std::cout << "Indique la TVA à appliquer : " << std::flush;
    if (!(std::cin >> b)) {
        std::cerr << "Erreur : vous devez entrer un nombre entier !" << std::endl;
        return 1;
    }

    double c;
    std::cout << "Indique la quantité de carottes voulue : " << std::flush;
    if (!(std::cin >> c)) {
        std::cerr << "Erreur : vous devez entrer un nombre entier !" << std::endl;
        return 1;
    }

    double resultat = prix_TTC(a, b, c);
    std::cout << "Le prix TTC des carottes est de : " << resultat << " euros." << std::endl;

    return 0;
}
