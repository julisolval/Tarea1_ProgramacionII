#ifndef INGRESARANIO_H
#define INGRESARANIO_H
#include "Vehiculo.h"
#include <iostream>
/*
Principio de Responsabilidad Única: este principio se ve reflajeado en este código, ya que esta clase
tiene una única responsabilidad.
*/
class IngresarAnio
{
public:
	IngresarAnio();
	virtual ~IngresarAnio();
	int ingresarAnio(const int); 
};

#endif