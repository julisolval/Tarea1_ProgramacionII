#ifndef DEVALUACIONMARCA_H
#define DEVALUACIONMARCA_H
#include <string>
#include <map>
/*
Principio de Responsabilidad Única: este principio se ve reflajeado en este código, ya que esta clase
tiene una única responsabilidad.

Principio Abierto Cerrado: esta clase se encuentra abierta para su extensión ya que se le pueden 
agregar más marcas por medio de un método, pero cerrada para su modificación ya que no hay razón para
modificar el código existente. El método que menciono se puede crear en caso de ser necesario, en 
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