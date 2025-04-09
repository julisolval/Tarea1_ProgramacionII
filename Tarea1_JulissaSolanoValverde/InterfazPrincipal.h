#ifndef INTERFAZPRINCIPAL_H
#define INTERFAZPRINCIPAL_H
#include "IngresoDeInformacion.h"
#include "IMostrarResultados.h"

/*
Herencia Múltiple:
InterfazPrincipal es una clase derivada de IngresoDeInformacion e IMostrarResultados, 
las cuales son clases base. Es herencia múltiple ya que una clase derivada hereda de dos 
o más clases base.

Segregación de Interfaces:
Desarrollé dos interfaces pequeñas y específicas, en lugar de una 
InterfazPrincipal grande con muchos métodos.

Principio de Responsabilidad Única:
Al crear interfaces pequeñas y específicas, también estoy haciendo uso del principio de 
responsabilidad única, ya que cada interfaz tiene su función específica.
*/

class InterfazPrincipal: public IngresoDeInformacion, public IMostrarResultados {
public:
	InterfazPrincipal();
	~InterfazPrincipal();
	void Menu();
};

#endif