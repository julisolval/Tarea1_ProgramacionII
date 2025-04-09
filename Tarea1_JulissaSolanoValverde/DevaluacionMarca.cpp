#include "DevaluacionMarca.h"

std::map<std::string, double> DevaluacionMarca::tabla = {
    {"AUDI", 0.02},
    {"BENTLEY", 0.03},
    {"CUPRA", 0.04},
    {"LAMBORGHINI", 0},
    {"PORSCHE", 0.01},
    {"SEAT", 0.04},
    {"SKODA", 0.08},
    {"VOLKSWAGEN", 0.05}
};

DevaluacionMarca::DevaluacionMarca()
{
}

DevaluacionMarca::~DevaluacionMarca()
{
}

bool DevaluacionMarca::buscarMarca(const std::string &marca)
{
    return (tabla.find(marca) != tabla.end());
}

double DevaluacionMarca::obtenerDevaluacion(const std::string &marca)
{
    return tabla.at(marca);
}
