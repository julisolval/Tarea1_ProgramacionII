#include "Anio.h"

Anio::Anio() : anio(0){}

Anio::Anio(int anio): anio(anio){}

Anio::~Anio(){}

int Anio::getAnio() const
{
	return anio;
}

bool Anio::anioCorrecto(int anio)
{
	return ((anio > 0) && DevaluacionAnio::buscarAnio(anio));
}
