#include "Heroe.h"
#include <iostream>

Heroe::Heroe(int vida)
{
    this->vida = vida;
    this->ataque = 2; // comienza en 2
    this->kills = 0;
}

void Heroe::recibirAtaque(int damage)
{
    vida -= damage;
}

void Heroe::sumarKill()
{
    kills++;
    mejorarArma();
}

void Heroe::mejorarArma()
{
    if (kills > 2 && kills % 5 == 0)
    {
        ataque++;
    }
}

int Heroe::getVida() const
{
    return vida;
}

int Heroe::getAtaque() const
{
    return ataque;
}