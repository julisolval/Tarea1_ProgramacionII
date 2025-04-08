#include "DevaluacionCilindros.h"

std::map<int, double> DevaluacionCilindros::tabla = {
    {3, 0.02},
    {4, 0.04},
    {8, 0.06},
    {12, 0.08}
};

bool DevaluacionCilindros::buscarCilindros(const int cilindrada)
{
    return (tabla.find(cilindrada) != tabla.end());
}

double DevaluacionCilindros::obtenerDevaluacion(const int cilindrada)
{
    return tabla.at(cilindrada);
}
