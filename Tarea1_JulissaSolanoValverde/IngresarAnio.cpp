// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include "IngresarAnio.h"

IngresarAnio::IngresarAnio()
{
}

IngresarAnio::~IngresarAnio()
{
}

int IngresarAnio::ingresarAnio(const int can)
{
	int anio;
	do {
		std::cout << "A\xA4o del veh\241culo " << can << ": ";
		std::cin >> anio;
		if (!Vehiculo::anioCorrecto(anio) || std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\aA\xA4o no v\240lido\n";
		}
	} while (!Vehiculo::anioCorrecto(anio));
	return anio;
}
