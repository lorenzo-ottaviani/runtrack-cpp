#pragma once

#include "aquatique.hpp"
#include "terrestre.hpp"

class Pingouin : public Aquatique, public Terrestre {
protected:
    int position_x;
    int position_y;

public:
    /* Constructeur */;
    Pingouin(double vitesse_marche_initiale, double vitesse_nage_initiale);

    /* Getters */
    int get_position_x() const;
    int get_position_y() const;

    /* Setters */
    void set_position_x(int position_x);
    void set_position_y(int position_y);

    /* Méthodes de déplacement et présentation */
    void marcher() override;
    void nager() override;
    void se_presenter();
};
