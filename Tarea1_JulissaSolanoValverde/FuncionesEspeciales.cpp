// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include "FuncionesEspeciales.h"

FuncionesEspeciales::FuncionesEspeciales()
{
}

FuncionesEspeciales::FuncionesEspeciales(std::string marca, int anio, int cilindrada, double precio) : Vehiculo(marca, anio, cilindrada, precio) {}

FuncionesEspeciales::~FuncionesEspeciales()
{
}

std::string FuncionesEspeciales::FuncionEspecial1(bool usados[], int can)
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

std::string FuncionesEspeciales::FuncionEspecial2(bool usados[], int can)
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

std::string FuncionesEspeciales::getFuncionEspecial1(bool usados[], int can)
{
    return FuncionEspecial1(usados, can);
}

std::string FuncionesEspeciales::getFuncionEspecial2(bool usados[], int can)
{
    return FuncionEspecial2(usados, can);
}
