// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include "Cilindrada.h"

Cilindrada::Cilindrada(): cilindrada(0){}

Cilindrada::Cilindrada(int cilindrada): cilindrada(cilindrada){}

Cilindrada::~Cilindrada(){}

int Cilindrada::getCilindrada() const
{
    return cilindrada;
}

bool Cilindrada::cilindradaCorrecta(int cilindrada)
{
	return ((cilindrada > 0) && DevaluacionCilindros::buscarCilindros(cilindrada));
}

