// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include "DevaluacionAnio.h"

std::map<int, double> DevaluacionAnio::tabla = {
    {2025, 0},
    {2024, 0.01},
    {2023, 0.02},
    {2022, 0.03},
    {2021, 0.04},
    {2020, 0.05},
    {2019, 0.06},
    {2018, 0.07},
    {2017, 0.08}
};

DevaluacionAnio::DevaluacionAnio()
{
}

DevaluacionAnio::~DevaluacionAnio()
{
}

bool DevaluacionAnio::buscarAnio(const int anio)
{
    return  (tabla.find(anio) != tabla.end());
}

double DevaluacionAnio::obtenerDevaluacion(const int anio)
{
    return tabla.at(anio);
}
