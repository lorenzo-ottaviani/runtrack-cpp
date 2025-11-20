#include "terrestre.hpp"

/* Constructeur */
Terrestre::Terrestre(double vitesse_marche_initiale) : vitesse_marche(vitesse_marche_initiale) {}

/* Getters */
double Terrestre::get_vitesse_marche() const {
    return vitesse_marche;
}

/* Setters */
void Terrestre::set_vitesse_marche(double vitesse_marche) {
    this->vitesse_marche = vitesse_marche;
}

/* Méthodes de déplacement */
void Terrestre::marcher() {}
