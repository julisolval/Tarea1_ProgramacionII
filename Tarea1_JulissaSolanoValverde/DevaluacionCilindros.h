#ifndef DEVALUACIONCILINDROS_H
#define DEVALUACIONCILINDROS_H
#include <map>
/*
Principio de Responsabilidad �nica: este principio se ve reflajeado en este c�digo, ya que esta clase
tiene una �nica responsabilidad.

Principio Abierto Cerrado: esta clase se encuentra abierta para su extensi�n ya que se le pueden
agregar m�s cilindros por medio de un m�todo, pero cerrada para su modificaci�n ya que no hay raz�n 
para modificar el c�digo existente. El m�todo que menciono se puede crear en caso de ser necesario, en 
este momento no lo es, por lo que no fue creado.
*/
class DevaluacionCilindros
{
private:
	static std::map<int, double> tabla;
public:
	DevaluacionCilindros();
	virtual ~DevaluacionCilindros();
	static bool buscarCilindros(const int);
	static double obtenerDevaluacion(const int);

};

#endif