#ifndef INGRESARMARCA_H
#define INGRESARMARCA_H
#include <iostream>
#include "Vehiculo.h"
/*
Principio de Responsabilidad Única: este principio se ve reflajeado en este código, ya que esta clase
tiene una única responsabilidad.
*/
class IngresarMarca
{
public:
	static std::string ingresarMarca(const int);
};

#endif