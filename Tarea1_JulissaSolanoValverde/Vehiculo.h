#ifndef VEHICULO_H
#define VEHICULO_H
#include "Marca.h"
#include "Anio.h"
#include "Cilindrada.h"
#include "Precio.h"
#include <sstream>
#include <cstdlib>
#include <ctime> 

/*
Herencia Disjunta: Vehículo hereda de varias clases base que no estan relacionadas entre sí
*/
class Vehiculo: public Marca, public Anio, public Cilindrada, public Precio
{
private:
	static std::string FuncionEspecial1(bool[], int );
protected:
	static std::string FuncionEspecial2(bool[], int );
public:
	Vehiculo(std::string, int, int, double);
	virtual ~Vehiculo();

	static double precioFinal(Vehiculo&);

	static std::string precioOriginalFinal(Vehiculo&, int);

	static std::string getFuncionEspecial1(bool[], int);
	static std::string getFuncionEspecial2(bool[], int);

};

#endif