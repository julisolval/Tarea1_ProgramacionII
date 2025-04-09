// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include "IngresarPrecio.h"

IngresarPrecio::IngresarPrecio()
{
}

IngresarPrecio::~IngresarPrecio()
{
}

double IngresarPrecio::ingresarPrecio(const int can)
{
	double precio;
	do {
		std::cout << "Precio veh\241culo " << can << ": ";
		std::cin >> precio;
		if (!Vehiculo::precioCorrecto(precio) || std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\aPrecio no v\240lido\n";
		}
	} while (!Vehiculo::precioCorrecto(precio));
	return precio;
}
