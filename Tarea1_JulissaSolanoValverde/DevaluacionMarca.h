#ifndef DEVALUACIONMARCA_H
#define DEVALUACIONMARCA_H
#include <string>
#include <map>
/*
Principio de Responsabilidad �nica: este principio se ve reflajeado en este c�digo, ya que esta clase
tiene una �nica responsabilidad.

Principio Abierto Cerrado: esta clase se encuentra abierta para su extensi�n ya que se le pueden 
agregar m�s marcas por medio de un m�todo, pero cerrada para su modificaci�n ya que no hay raz�n para
modificar el c�digo existente. El m�todo que menciono se puede crear en caso de ser necesario, en 
este momento no lo es, por lo que no fue creado.
*/
class DevaluacionMarca
{
private: 
	static std::map<std::string, double> tabla;
public:
    static bool buscarMarca(const std::string &);
    static double obtenerDevaluacion(const std::string &);
};

#endif