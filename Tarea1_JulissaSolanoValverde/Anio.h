#ifndef ANIO_H
#define ANIO_H
#include "DevaluacionAnio.h"
/*
Principio de Responsabilidad �nica: este principio se ve reflajeado en este c�digo, ya que esta clase
tiene una �nica responsabilidad.
*/
class Anio
{
private:
	int anio;
public:
	Anio();
	Anio(int);
	virtual ~Anio();

	int getAnio() const;
	
	static bool anioCorrecto(int);
};

#endif