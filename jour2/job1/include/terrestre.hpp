#pragma once

class Terrestre {
protected:
    double vitesse_marche;  // en m/s

public:
    /* Constructeur */
    Terrestre(double vitesse_marche_initiale);

    /* Getters */
    double get_vitesse_marche() const;

    /* Setters */
    void set_vitesse_marche(double vitesse_marche);

    /* Méthodes de déplacement */
    virtual void marcher();
};
