#ifndef INGRESODEINFORMACION_H
#define INGRESODEINFORMACION_H
#include "IngresarMarca.h"
#include "IngresarAnio.h"
#include "IngresarCilindrada.h"
#include "IngresarPrecio.h"

/*
Herencia M�ltiple: se cumple ya que la clase hija hereda de dos o m�s clases base.

Segregaci�n de Interfaces: desarroll� varias interfaces peque�as y espec�ficas, tales como, 
IngresarMarca, IngresarAnio, IngresarCilindrada e IngresarPrecio cumpliendo a su vez con el 
Principio de Responsabilidad �nica.
*/
class IngresoDeInformacion: public IngresarMarca, public IngresarAnio, public IngresarCilindrada, public IngresarPrecio
{
public:
	IngresoDeInformacion();
	~IngresoDeInformacion();
	Vehiculo* capturarInformacion(const int);
};

#endif