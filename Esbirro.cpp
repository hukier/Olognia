#include "Esbirro.h"
#include <iostream>

Esbirro::Esbirro(int vida, int ataque, bool esCano)
{
    this->vida = vida;
    this->ataque = ataque;
    this->esCano = esCano;
    this->AtaquesRecibidos = 0;
}

bool Esbirro::debeDividirse() const
{
    return esCano && AtaquesRecibidos >= 2;
}

int Esbirro::getVida() const
{
    return vida;
}

int Esbirro::getAtaque() const
{
    return ataque;
}

bool Esbirro::getEsCano() const
{
    return esCano;
}

void Esbirro::recibirAtaque(int damage)
{
    vida -= damage;
    AtaquesRecibidos++;
}