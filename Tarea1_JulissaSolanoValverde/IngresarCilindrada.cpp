#include "IngresarCilindrada.h"

IngresarCilindrada::IngresarCilindrada()
{
}

IngresarCilindrada::~IngresarCilindrada()
{
}

int IngresarCilindrada::ingresarCilindrada(const int can)
{
	int cilindrada;
	do {
		std::cout << "Cilindrada Motor del veh\241culo " << can << ": ";
		std::cin >> cilindrada;
		if (!Vehiculo::cilindradaCorrecta(cilindrada) || std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\aCilindrada no v\240lida\n";
		}
	} while (!Vehiculo::cilindradaCorrecta(cilindrada));
	return cilindrada;
}
