#ifndef INGRESARMARCA_H
#define INGRESARMARCA_H
#include <iostream>
#include "Vehiculo.h"
/*
Principio de Responsabilidad �nica: este principio se ve reflajeado en este c�digo, ya que esta clase
tiene una �nica responsabilidad.
*/
class IngresarMarca
{
public:
	static std::string ingresarMarca(const int);
};

#endif