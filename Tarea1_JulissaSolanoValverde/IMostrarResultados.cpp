#include "IMostrarResultados.h"

IMostrarResultados::IMostrarResultados()
{
}

IMostrarResultados::IMostrarResultados(std::string, int, int, double)
{
}

IMostrarResultados::~IMostrarResultados()
{
}

void IMostrarResultados::mostrarInformacion(Vehiculo& vehiculo, int can)
{
	static bool usados1[5] = { false, false, false, false, false };
	static bool usados2[4] = { false, false, false, false };
	std::cout << "\n***********************\n";
	std::cout << PrecioFinal::precioOriginalFinal(vehiculo, can);
	std::cout << "\n\nLista de funciones especiales";
	std::cout << FuncionesEspeciales::getFuncionEspecial1(usados1, can) << std::endl;
	std::cout << FuncionesEspeciales::getFuncionEspecial2(usados2, can);
	std::cout << std::endl;

}

