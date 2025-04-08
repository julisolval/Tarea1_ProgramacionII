#ifndef CILINDRADA_H
#define CILINDRADA_H
#include "DevaluacionCilindros.h"
/*
Principio de Responsabilidad �nica: este principio se ve reflajeado en este c�digo, ya que esta clase
tiene una �nica responsabilidad.
*/
class Cilindrada
{
private:
	int cilindrada;
public:
	Cilindrada();
	Cilindrada(int);
	virtual ~Cilindrada();

	int getCilindrada() const;
	
	static bool cilindradaCorrecta(int);
};

#endif