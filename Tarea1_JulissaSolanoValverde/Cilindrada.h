#ifndef CILINDRADA_H
#define CILINDRADA_H
#include "DevaluacionCilindros.h"
/*
Principio de Responsabilidad Única: este principio se ve reflajeado en este código, ya que esta clase
tiene una única responsabilidad.
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