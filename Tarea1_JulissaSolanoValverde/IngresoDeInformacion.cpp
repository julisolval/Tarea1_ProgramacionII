// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include "IngresoDeInformacion.h"

IngresoDeInformacion::IngresoDeInformacion()
{
}

IngresoDeInformacion::~IngresoDeInformacion()
{
}

Vehiculo* IngresoDeInformacion::capturarInformacion(const int can)
{
	std::string marca;
	int anio, cilindrada;
	double precio;
	std::cout << "***********************\n";
	marca = ingresarMarca(can);
	anio = ingresarAnio(can);
	cilindrada = ingresarCilindrada(can);
	precio = ingresarPrecio(can);
	std::cout << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	return new Vehiculo(marca, anio, cilindrada, precio);
}
