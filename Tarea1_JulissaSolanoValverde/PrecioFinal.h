#ifndef PRECIOFINAL_H
#define PRECIOFINAL_H
#include "Vehiculo.h"

class PrecioFinal: public Vehiculo
{
public:
	PrecioFinal();
	PrecioFinal(std::string, int, int, double);
	~PrecioFinal();

	virtual std::string precioOriginalFinal(Vehiculo&, int) override;
	double precioFinal(Vehiculo&);
};

#endif