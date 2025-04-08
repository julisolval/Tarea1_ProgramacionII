#include "IMostrarResultados.h"

void IMostrarResultados::mostrarInformacion(Vehiculo& vehiculo, int can)
{
	static bool usados1[5] = { false, false, false, false, false };
	static bool usados2[4] = { false, false, false, false };
	std::cout << "\n***********************\n";
	std::cout << Vehiculo::precioOriginalFinal(vehiculo, can);
	std::cout << "\n\nLista de funciones especiales";
	std::cout << Vehiculo::getFuncionEspecial1(usados1, can) << std::endl;
	std::cout << Vehiculo::getFuncionEspecial2(usados2, can);
	std::cout << std::endl;

}