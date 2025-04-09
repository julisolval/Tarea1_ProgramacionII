#ifndef INTERFAZPRINCIPAL_H
#define INTERFAZPRINCIPAL_H
#include "IngresoDeInformacion.h"
#include "IMostrarResultados.h"

/*
Herencia M�ltiple:
InterfazPrincipal es una clase derivada de IngresoDeInformacion e IMostrarResultados, 
las cuales son clases base. Es herencia m�ltiple ya que una clase derivada hereda de dos 
o m�s clases base.

Segregaci�n de Interfaces:
Desarroll� dos interfaces peque�as y espec�ficas, en lugar de una 
InterfazPrincipal grande con muchos m�todos.

Principio de Responsabilidad �nica:
Al crear interfaces peque�as y espec�ficas, tambi�n estoy haciendo uso del principio de 
responsabilidad �nica, ya que cada interfaz tiene su funci�n espec�fica.
*/

class InterfazPrincipal: public IngresoDeInformacion, public IMostrarResultados {
public:
	InterfazPrincipal();
	~InterfazPrincipal();
	void Menu();
};

#endif