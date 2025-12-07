#pragma once

class Aquatique {
protected:
    double vitesse_nage;  // en m/s

public:
    /* Constructeur */
    explicit Aquatique(double vitesse_nage_initiale);

    /* Destructeur */
    virtual ~Aquatique() = default;

    /* Getters */
    [[nodiscard]] double get_vitesse_nage() const;

    /* Setters */
    void set_vitesse_nage(double vitesse_nage);

    /* Méthodes de déplacement */
    virtual void nager();
};
