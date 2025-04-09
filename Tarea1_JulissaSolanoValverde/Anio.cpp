// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include "Anio.h"

Anio::Anio() : anio{0} {}

Anio::Anio(int anio) : anio{ anio } {}

Anio::~Anio(){}

int Anio::getAnio() const
{
	return anio;
}

bool Anio::anioCorrecto(int anio)
{
	return ((anio > 0) && DevaluacionAnio::buscarAnio(anio));
}
