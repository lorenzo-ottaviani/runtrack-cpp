#pragma once

class Terrestre {
protected:
    double vitesse_marche;  // en m/s

public:
    /* Constructeur */
    explicit Terrestre(double vitesse_marche_initiale);

    /* Destructeur */
    virtual ~Terrestre() = default;

    /* Getters */
    [[nodiscard]] double get_vitesse_marche() const;

    /* Setters */
    void set_vitesse_marche(double vitesse_marche);

    /* Méthodes de déplacement */
    virtual void marcher();
};
