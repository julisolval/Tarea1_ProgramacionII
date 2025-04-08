#ifndef PRECIO_H
#define PRECIO_H
/*
Principio de Responsabilidad Única: este principio se ve reflajeado en este código, ya que esta clase
tiene una única responsabilidad.
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