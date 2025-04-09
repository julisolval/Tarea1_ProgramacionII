#ifndef INGRESODEINFORMACION_H
#define INGRESODEINFORMACION_H
#include "IngresarMarca.h"
#include "IngresarAnio.h"
#include "IngresarCilindrada.h"
#include "IngresarPrecio.h"

/*
Herencia Múltiple: se cumple ya que la clase hija hereda de dos o más clases base.

Segregación de Interfaces: desarrollé varias interfaces pequeñas y específicas, tales como, 
IngresarMarca, IngresarAnio, IngresarCilindrada e IngresarPrecio cumpliendo a su vez con el 
Principio de Responsabilidad Única.
*/
class IngresoDeInformacion: public IngresarMarca, public IngresarAnio, public IngresarCilindrada, public IngresarPrecio
{
public:
	IngresoDeInformacion();
	~IngresoDeInformacion();
	Vehiculo* capturarInformacion(const int);
};

#endif