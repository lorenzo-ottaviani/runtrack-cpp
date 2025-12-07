#include "aquatique.hpp"

/* Constructeur */
Aquatique::Aquatique(double vitesse_nage_initiale) : vitesse_nage(vitesse_nage_initiale) {}

/* Getters */
double Aquatique::get_vitesse_nage() const {
    return vitesse_nage;
}

/* Setters */
void Aquatique::set_vitesse_nage(double vitesse_nage) {
    this->vitesse_nage = vitesse_nage;
}

/* Méthodes de déplacement */
void Aquatique::nager() {}
