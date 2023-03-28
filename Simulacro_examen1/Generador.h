/**
 * @author Juan Montes Trujillo 46096933B
 * @file Generador.h
 */

#ifndef CLOUDPOO_GENERADOR_H
#define CLOUDPOO_GENERADOR_H


#include <string>

class Generador {
private:
    std::string modelo;
    float potencia;
public:
    Generador(float _potencia);
    Generador(const std::string &cadena, float potencia);
    Generador(const Generador& orig) = default;
    virtual ~Generador() = default;

    const std::string &getModelo() const;

    float getPotencia() const;
};


#endif //CLOUDPOO_GENERADOR_H
