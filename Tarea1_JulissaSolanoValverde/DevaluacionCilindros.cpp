// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include "DevaluacionCilindros.h"

std::map<int, double> DevaluacionCilindros::tabla = {
    {3, 0.02},
    {4, 0.04},
    {8, 0.06},
    {12, 0.08}
};

DevaluacionCilindros::DevaluacionCilindros()
{
}

DevaluacionCilindros::~DevaluacionCilindros()
{
}

bool DevaluacionCilindros::buscarCilindros(const int cilindrada)
{
    return (tabla.find(cilindrada) != tabla.end());
}

double DevaluacionCilindros::obtenerDevaluacion(const int cilindrada)
{
    return tabla.at(cilindrada);
}
