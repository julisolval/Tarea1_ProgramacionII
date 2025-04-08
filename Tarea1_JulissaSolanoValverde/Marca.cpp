#include "Marca.h"

Marca::Marca(): marca("Indef"){}

Marca::Marca(std::string marca): marca(marca){}

Marca::~Marca(){}

std::string Marca::getMarca() const
{
    return marca;
}

bool Marca::marcaCorrecta(const std::string &marca)
{
    return ((marca != "Indef") && DevaluacionMarca::buscarMarca(marca));
}