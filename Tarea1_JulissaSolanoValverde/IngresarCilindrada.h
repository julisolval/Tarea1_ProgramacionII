#ifndef INGRESARCILINDRADA_H
#define INGRESARCILINDRADA_H
#include "Vehiculo.h"
#include <iostream>
/*
Principio de Responsabilidad Única: este principio se ve reflajeado en este código, ya que esta clase
tiene una única responsabilidad.
*/
class IngresarCilindrada
{
public:
	IngresarCilindrada();
	virtual ~IngresarCilindrada();
	int ingresarCilindrada(const int);
};

#endif