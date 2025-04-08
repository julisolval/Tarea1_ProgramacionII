#include "IngresoDeInformacion.h"

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
	return new Vehiculo(marca ,anio ,cilindrada ,precio);
}
