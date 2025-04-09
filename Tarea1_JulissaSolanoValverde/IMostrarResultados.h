#ifndef RESULTADOS_H
#define RESULTADOS_H
#include <iostream>
#include "FuncionesEspeciales.h"
#include "PrecioFinal.h"

/*
Herencia Disjunta: se hereda de varias clases base que no estan relacionadas entre sí
*/
class IMostrarResultados: public FuncionesEspeciales, public PrecioFinal
{
public:
	IMostrarResultados();
	IMostrarResultados(std::string, int, int, double);
	~IMostrarResultados();
	void mostrarInformacion(Vehiculo& vehiculo, int can);
};

#endif