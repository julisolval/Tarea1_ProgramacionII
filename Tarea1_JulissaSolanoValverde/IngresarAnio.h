#ifndef INGRESARANIO_H
#define INGRESARANIO_H
#include "Vehiculo.h"
#include <iostream>
/*
Principio de Responsabilidad �nica: este principio se ve reflajeado en este c�digo, ya que esta clase
tiene una �nica responsabilidad.
*/
class IngresarAnio
{
public:
	IngresarAnio();
	virtual ~IngresarAnio();
	int ingresarAnio(const int); 
};

#endif