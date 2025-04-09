// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include "Precio.h"

Precio::Precio(): precio(0.0){}

Precio::Precio(double precio):precio(precio){}

Precio::~Precio(){}

double Precio::getPrecio() const
{
    return precio;
}

bool Precio::precioCorrecto(double precio)
{
    return (precio > 0);;
}
