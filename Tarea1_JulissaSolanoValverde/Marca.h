#ifndef MARCA_H
#define MARCA_H
#include "DevaluacionMarca.h"
/*
Principio de Responsabilidad Única: este principio se ve reflajeado en este código, ya que esta clase
tiene una única responsabilidad.
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