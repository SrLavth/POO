/**
 * @author Juan Montes Trujillo 46096933B
 * @file DataCenter.h
 */

#ifndef CLOUDPOO_INI_DATACENTER_H
#define CLOUDPOO_INI_DATACENTER_H

/* Primer ejercicio*/

#include <string>
#include "Dispositivo.h"
#include "Generador.h"

class DataCenter {
private:
    std::string ubicacion;
    float superficie;
    int tecnicos;
    Generador *generadorAsignado = nullptr;
    Dispositivo *dispositivosAsignados = nullptr;
    int tamArrayDispositivos;
    int numDispositivos = 0;

public:
    DataCenter();
    DataCenter(DataCenter &orig);
    DataCenter(float _superficie, std::string _ubicacion);
    ~DataCenter();
    void setFuente(Generador *_generador);
    float getPotenciaDisponible();
    void Instala (Dispositivo &_dispositivo);
    Dispositivo getDispositivo(int posicion);
    void setTamArrayDispositivo(int _tam);
    int getNumDispositivos();
    float consumoActual();

    /*Segundo ejercicio*/

    std::string getUbicacion();
    float getSuperficie();
    int getTecnicos();
    Generador getGenerador();
    int getTamArrayDispositivos();
    void setTecnicos(int _tecnicos);
};

#endif //CLOUDPOO_INI_DATACENTER_H
