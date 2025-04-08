#include "Vehiculo.h"

std::string Vehiculo::FuncionEspecial1(bool usados[], int can)
{
    const std::string array[5] = { "es peque\xA4o", "es grande", "es c\242modo", "es fuerte pero lento", "es r\240pido pero poco fuerte" };
    int num = 0;
    do {
        num = rand() % 5;
    } while (usados[num]);
    usados[num] = true;
    std::stringstream ss;
    ss << "\nFunci\242n especial 1, veh\241culo " << can << ":\t" << array[num];
    return ss.str();
}

std::string Vehiculo::FuncionEspecial2(bool usados[], int can)
{
    const std::string array[4] = { "buena suspensi\242n", "mala suspensi\242n", "buen vidrio", "mal vidrio" };
    int num = 0;
    do {
        num = rand() % 4;
    } while (usados[num]);
    usados[num] = true;
    std::stringstream ss;
    ss << "Funci\242n especial 2, veh\241culo " << can << ":\t" << array[num];
    return ss.str();
}

Vehiculo::Vehiculo(std::string marca, int anio, int cilindrada, double precio): Marca(marca), Anio(anio), Cilindrada(cilindrada), Precio(precio) {}

Vehiculo::~Vehiculo() {}

double Vehiculo::precioFinal(Vehiculo& vehiculo)
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

std::string Vehiculo::precioOriginalFinal(Vehiculo& vehiculo, int can)
{
    std::stringstream ss;
    ss << "Precio Original veh\241culo " << can << ":\t" << vehiculo.getPrecio();
    ss << "\nPrecio Final veh\241culo " << can << ":\t" << precioFinal(vehiculo);
    return ss.str();
}

std::string Vehiculo::getFuncionEspecial1(bool usados[], int can)
{
    return FuncionEspecial1(usados, can);
}

std::string Vehiculo::getFuncionEspecial2(bool usados[], int can)
{
    return FuncionEspecial2(usados, can);
}
