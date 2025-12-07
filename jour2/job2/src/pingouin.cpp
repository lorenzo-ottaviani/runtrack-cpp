#include <iostream>

#include "pingouin.hpp"

/* Constructeur */
Pingouin::Pingouin(double vitesse_marche_initiale, double vitesse_nage_initiale, double vitesse_glisse_initiale)
    : Aquatique(vitesse_nage_initiale), Terrestre(vitesse_marche_initiale), position_x(0),
    position_y(0), vitesse_glisse(vitesse_glisse_initiale)
{}

/* Getters */
double Pingouin::get_position_x() const {
    return position_x;
}

double Pingouin::get_position_y() const {
    return position_y;
}

double Pingouin::get_vitesse_glisse() const {
    return vitesse_glisse;
}

/* Setters */
void Pingouin::set_position_x(double position_x) {
    this->position_x = position_x;
}

void Pingouin::set_position_y(double position_y) {
    this->position_y = position_y;
}

void Pingouin::set_vitesse_glisse(double vitesse_glisse) {
    this->vitesse_glisse = vitesse_glisse;
}

/* Méthodes de déplacement et présentation */
void Pingouin::marcher () {
    position_x += vitesse_marche*2;
    position_y += vitesse_marche*8;
}

void Pingouin::nager() {
    position_x += vitesse_nage*5;
    position_y += vitesse_nage*5;
}

void Pingouin::glisser() {
    position_x += vitesse_glisse*10;
    position_y += vitesse_glisse*2;
}


void Pingouin::se_presenter() {
    std::cout << "Le pingouin est en (" << position_x << ", " << position_y << ")." << std::endl;
    Pingouin::nager();
    std::cout << "Il a nagé et est maintenant en (" << position_x << ", " << position_y << ")." << std::endl;
    Pingouin::marcher();
    std::cout << "Il a marché et est maintenant en (" << position_x << ", " << position_y << ")." << std::endl;
}
