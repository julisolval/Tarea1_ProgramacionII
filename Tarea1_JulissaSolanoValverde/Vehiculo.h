#ifndef VEHICULO_H
#define VEHICULO_H
#include "Marca.h"
#include "Anio.h"
#include "Cilindrada.h"
#include "Precio.h"
#include <sstream>
#include <cstdlib>
#include <ctime> 

class Vehiculo
{
private:
	Marca* marca;
	Anio* anio;
	Cilindrada* cilindrada;
	Precio* precio;
	virtual std::string FuncionEspecial1(bool[], int );
protected:
	virtual std::string FuncionEspecial2(bool[], int );
public:
	Vehiculo();
	Vehiculo(std::string, int, int, double);
	Vehiculo(const Vehiculo&);
	virtual ~Vehiculo();

	std::string getMarca() const;
	int getAnio() const;
	int getCilindrada() const;
	double getPrecio() const;

	static bool anioCorrecto(int);
	static bool cilindradaCorrecta(int);
	static bool marcaCorrecta(const std::string&);
	static bool precioCorrecto(double);

	virtual std::string precioOriginalFinal(Vehiculo&, int);
};

#endif