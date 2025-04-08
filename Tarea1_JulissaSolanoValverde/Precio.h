#ifndef PRECIO_H
#define PRECIO_H
/*
Principio de Responsabilidad �nica: este principio se ve reflajeado en este c�digo, ya que esta clase
tiene una �nica responsabilidad.
*/
class Precio
{
private:
	double precio;
public:
	Precio();
	Precio(double);
	virtual ~Precio();

	double getPrecio() const;

	static bool precioCorrecto(double);
};

#endif