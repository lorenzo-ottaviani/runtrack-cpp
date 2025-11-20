#pragma once

class Aquatique {
protected:
    double vitesse_nage;  // en m/s

public:
    /* Constructeur */
    Aquatique(double vitesse_nage_initiale);

    /* Getters */
    double get_vitesse_nage() const;

    /* Setters */
    void set_vitesse_nage(double vitesse_nage);

    /* Méthodes de déplacement */
    virtual void nager();
};
