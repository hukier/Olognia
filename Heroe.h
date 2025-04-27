#ifndef HEROE_H
#define HEROE_H

class Heroe
{

private:
    int vida;
    int ataque; // comienza en 2
    int kills;

public:
    // constructor
    Heroe(int vida);

    // metodos
    void recibirAtaque(int damage);
    void sumarKill();
    void mejorarArma();

    // Getters
    int getVida() const;
    int getAtaque() const;
};

#endif