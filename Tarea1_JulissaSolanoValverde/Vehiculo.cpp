// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include "Vehiculo.h"

std::string Vehiculo::FuncionEspecial1(bool[], int)
{
    return "No ha sido implementada\n";
}

std::string Vehiculo::FuncionEspecial2(bool[], int)
{
    return "No ha sido implementada\n";
}

Vehiculo::Vehiculo() : marca(nullptr), anio(nullptr), cilindrada(nullptr), precio(nullptr){}

Vehiculo::Vehiculo(std::string marca, int anio, int cilindrada, double precio): marca(new Marca(marca)), anio(new Anio(anio)), cilindrada(new Cilindrada(cilindrada)), precio(new Precio(precio)) {}

Vehiculo::Vehiculo(const Vehiculo& copy) : marca{ copy.marca }, anio{ copy.anio }, cilindrada{ copy.cilindrada }, precio{ copy.precio } {}

Vehiculo::~Vehiculo() {
    if (marca) { delete marca; }
    if (anio) { delete anio; }
    if (cilindrada) { delete cilindrada; }
    if (precio) { delete precio; }
}

std::string Vehiculo::getMarca() const
{
    return marca->getMarca();
}

int Vehiculo::getAnio() const
{
    return anio->getAnio();
}

int Vehiculo::getCilindrada() const
{
    return cilindrada->getCilindrada();
}

double Vehiculo::getPrecio() const
{
    return precio->getPrecio();
}

bool Vehiculo::anioCorrecto(int anio)
{
    return Anio::anioCorrecto(anio);
}

bool Vehiculo::cilindradaCorrecta(int cilindrada)
{
    return Cilindrada::cilindradaCorrecta(cilindrada);
}

bool Vehiculo::marcaCorrecta(const std::string& marca)
{
    return Marca::marcaCorrecta(marca);
}

bool Vehiculo::precioCorrecto(double precio)
{
    return Precio::precioCorrecto(precio);
}

std::string Vehiculo::precioOriginalFinal(Vehiculo&, int)
{
    return "No ha sido implementada\n";
}