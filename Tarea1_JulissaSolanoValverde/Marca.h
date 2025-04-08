#ifndef MARCA_H
#define MARCA_H
#include "DevaluacionMarca.h"
/*
Principio de Responsabilidad �nica: este principio se ve reflajeado en este c�digo, ya que esta clase
tiene una �nica responsabilidad.
*/
class Marca
{
private:
	std::string marca;
public:
	Marca();
	Marca(std::string);
	virtual ~Marca();

	std::string getMarca() const;

	static bool marcaCorrecta(const std::string &);
};

#endif 