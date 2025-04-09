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

