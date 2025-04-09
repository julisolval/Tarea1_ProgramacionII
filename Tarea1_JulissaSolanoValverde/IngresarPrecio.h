#ifndef INGRESARPRECIO_H
#define INGRESARPRECIO_H
#include "Vehiculo.h"
#include <iostream>
/*
Principio de Responsabilidad Única: este principio se ve reflajeado en este código, ya que esta clase
tiene una única responsabilidad.
*/
class IngresarPrecio
{
public:
	IngresarPrecio();
	virtual ~IngresarPrecio();
	double ingresarPrecio(const int);
};

#endif