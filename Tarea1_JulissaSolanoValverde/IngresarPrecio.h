#ifndef INGRESARPRECIO_H
#define INGRESARPRECIO_H
#include "Vehiculo.h"
#include <iostream>
/*
Principio de Responsabilidad �nica: este principio se ve reflajeado en este c�digo, ya que esta clase
tiene una �nica responsabilidad.
*/
class IngresarPrecio
{
public:
	IngresarPrecio();
	virtual ~IngresarPrecio();
	double ingresarPrecio(const int);
};

#endif