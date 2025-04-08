#include "IngresarMarca.h"

std::string IngresarMarca::ingresarMarca(const int can)
{
	std::string marca;
	do {
		std::cout << "Marca del veh\241culo " << can << ": ";
		std::getline(std::cin, marca);
		for (int i = 0; i < marca.length(); i++) {
			marca[i] = toupper(marca[i]);
		}
		if (!Vehiculo::marcaCorrecta(marca)) {
			std::cout << "\aMarca no v\240lida\n";
		} 
	} while (!Vehiculo::marcaCorrecta(marca));
	return marca;
}
