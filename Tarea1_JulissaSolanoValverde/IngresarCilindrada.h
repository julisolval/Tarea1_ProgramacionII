#ifndef INGRESARCILINDRADA_H
#define INGRESARCILINDRADA_H
#include "Vehiculo.h"
#include <iostream>
/*
Principio de Responsabilidad �nica: este principio se ve reflajeado en este c�digo, ya que esta clase
tiene una �nica responsabilidad.
*/
class IngresarCilindrada
{
public:
	IngresarCilindrada();
	virtual ~IngresarCilindrada();
	int ingresarCilindrada(const int);
};

#endif