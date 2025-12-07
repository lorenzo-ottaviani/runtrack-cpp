#pragma once

#include "aquatique.hpp"
#include "terrestre.hpp"

class Pingouin : public Aquatique, public Terrestre {
protected:
    double position_x;
    double position_y;
    double vitesse_glisse;  // en m/s

public:
    /* Constructeur */
    Pingouin(double vitesse_marche_initiale, double vitesse_nage_initiale, double vitesse_glisse_initiale);

    /* Destructeur */
   ~Pingouin() override = default;

    /* Constructeur de copie */
    Pingouin(const Pingouin&) = default;

    /* Affectation de copie */
    Pingouin& operator=(const Pingouin&) = default;

    /* Constructeur de déplacement */
    Pingouin(Pingouin&&) = default;

    /* Affectation de déplacement */
    Pingouin& operator=(Pingouin&&) = default;

    /* Getters */
    [[nodiscard]] double get_position_x() const;
    [[nodiscard]] double get_position_y() const;
    [[nodiscard]] double get_vitesse_glisse() const;

    /* Setters */
    void set_position_x(double position_x);
    void set_position_y(double position_y);
    void set_vitesse_glisse(double vitesse_glisse);

    /* Méthodes de déplacement et présentation */
    void marcher() override;
    void nager() override;
    void glisser();
    void se_presenter();
};
