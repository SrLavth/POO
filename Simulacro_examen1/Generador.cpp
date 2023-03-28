/**
 * @author Juan Montes Trujillo 46096933B
 * @file Generador.cpp
 */

#include "Generador.h"

Generador::Generador(float _potencia):potencia(potencia) {}

Generador::Generador(const std::string &cadena, float potencia)
    : modelo(cadena), potencia(potencia) {

}

const std::string &Generador::getModelo() const {
    return modelo;
}

float Generador::getPotencia() const {
    return potencia;
}
