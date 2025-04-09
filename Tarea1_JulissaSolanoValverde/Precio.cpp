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
