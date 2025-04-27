#ifndef ESBIRRO_H
#define ESBIRRO_H

class Esbirro
{
private:
    int vida;
    int ataque;
    bool esCano;
    int AtaquesRecibidos;

public:
    // contructor
    Esbirro(int vida, int ataque, bool esCano);

    // metodos
    bool debeDividirse() const;
    int getVida() const;
    int getAtaque() const;
    bool getEsCano() const;
    void recibirAtaque(int damage);
};

#endif