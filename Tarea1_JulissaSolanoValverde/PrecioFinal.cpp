#include "PrecioFinal.h"

PrecioFinal::PrecioFinal()
{
}

PrecioFinal::PrecioFinal(std::string marca, int anio, int cilindrada, double precio) : Vehiculo(marca, anio, cilindrada, precio) {}

PrecioFinal::~PrecioFinal()
{
}

std::string PrecioFinal::precioOriginalFinal(Vehiculo& vehiculo, int can)
{
    std::stringstream ss;
    ss << "Precio Original veh\241culo " << can << ":\t" << vehiculo.getPrecio();
    ss << "\nPrecio Final veh\241culo " << can << ":\t" << precioFinal(vehiculo);
    return ss.str();
}

double PrecioFinal::precioFinal(Vehiculo& vehiculo)
{
    double pFinal;
    if (vehiculo.getMarca() == "LAMBORGHINI") {
        return vehiculo.getPrecio();
    }
    else if (vehiculo.getMarca() == "BENTLEY") {
        pFinal = vehiculo.getPrecio() - DevaluacionMarca::obtenerDevaluacion("BENTLEY") * vehiculo.getPrecio() - DevaluacionAnio::obtenerDevaluacion(vehiculo.getAnio()) * vehiculo.getPrecio();
        return ((pFinal > 0) ? pFinal : 0);
    }
    else {
        pFinal = vehiculo.getPrecio() - DevaluacionMarca::obtenerDevaluacion(vehiculo.getMarca()) * vehiculo.getPrecio() - DevaluacionAnio::obtenerDevaluacion(vehiculo.getAnio()) * vehiculo.getPrecio() - DevaluacionCilindros::obtenerDevaluacion(vehiculo.getCilindrada()) * vehiculo.getPrecio();
        return ((pFinal > 0) ? pFinal : 0);
    }
}
