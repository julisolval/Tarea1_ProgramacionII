// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include "InterfazPrincipal.h"

InterfazPrincipal::InterfazPrincipal(){}

InterfazPrincipal::~InterfazPrincipal()
{
}

void InterfazPrincipal::Menu()
{
	srand(time(0));
	Vehiculo* arr[3];
	for (int i = 0; i < 3; i++) {
		arr[i] = capturarInformacion(i + 1);
	}

	for (int i = 0; i < 3; i++) {
		mostrarInformacion(*arr[i], i + 1);
		delete arr[i];
	}
}