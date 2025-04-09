#ifndef FUNCIONESESPECIALES_H
#define FUNCIONESESPECIALES_H
#include "Vehiculo.h"

class FuncionesEspeciales: public Vehiculo
{
private:
	virtual std::string FuncionEspecial1(bool[], int);
protected:
	virtual std::string FuncionEspecial2(bool[], int);
public:
	FuncionesEspeciales();
	FuncionesEspeciales(std::string, int, int, double);
	~FuncionesEspeciales();

	std::string getFuncionEspecial1(bool[], int);
	std::string getFuncionEspecial2(bool[], int);
};

#endif