#ifndef ANIO_H
#define ANIO_H
#include "DevaluacionAnio.h"
/*
Principio de Responsabilidad Única: este principio se ve reflajeado en este código, ya que esta clase
tiene una única responsabilidad.
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