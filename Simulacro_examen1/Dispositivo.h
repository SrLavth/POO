/**
 * @author Juan Montes Trujillo 46096933B
 * @file Dispositivo.h
 */

#ifndef CLOUDPOO_DISPOSITIVO_H
#define CLOUDPOO_DISPOSITIVO_H


#include <string>

class Dispositivo {
private:
    std::string descripcion;
    float consumo;
    bool activo = false;
public:
    Dispositivo();
    Dispositivo(Dispositivo &orig);
    Dispositivo(const std::string &descripcion, float consumo);
    Dispositivo(const Dispositivo& orig) = default;
    virtual ~Dispositivo() = default;

    const std::string &getDescripcion() const;
    float getConsumo() const;
    bool isActivo() const;

    void conmutaEstado();

};


#endif //CLOUDPOO_DISPOSITIVO_H
