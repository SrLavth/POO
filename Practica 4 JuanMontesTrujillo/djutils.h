#ifndef DJUTILS_H
#define DJUTILS_H

#include "Temazo.h"
#include "Garito.h"
#include "Fecha.h"

#include <iostream>
#include <string>

using namespace std;

void mostrarTemazo(const Temazo& t);
void mostrarGarito(const Garito& g);
void mostrarFecha(const Fecha& f);
void modificarGarito(Garito& g);
void mostrarTemazosAnteriores(Temazo temazos[], int tam, Fecha fechaLimite);
void mostrarTemazoDeMayorDuracion(Temazo t[], int tam);

#endif
