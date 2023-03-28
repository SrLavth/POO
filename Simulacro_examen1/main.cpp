/**
 * @author Juan Montes Trujillo 46096933B
 * @file main.cpp
 */

#include <iostream>
#include "Dispositivo.h"
#include "Generador.h"
#include "DataCenter.h"

int main() {
    /* Prueba 1: Crea un Datacenter con 2 técnicos asignados y tres Dispositivos con los siguientes datos:
     * Rack de servidores de 500W, RAID de discos de 750W, Unidad de backup de 250W*/

    DataCenter datC1;
    datC1.setTecnicos(2);
    datC1.setTamArrayDispositivo(3);

    Dispositivo disp1 ("Rack de servidores", 500);
    Dispositivo disp2 ("RAID de discos", 750);
    Dispositivo disp3 ("Unidad de backup", 250);

    /**
     * @idlexcept Aquí salta una excepción debido a la asignacion de "dispositivosAsignados" sin la existencia de un generador
     */

    /*Prueba 2: Crea dos Generadores de 1500W y trata de asignárselos al Datacenter.
     * Captura y muestra la información de posibles excepciones. Muestra la potencia del DataCenter*/

    Generador gen1(1500), gen2(1500);
    datC1.setFuente(&gen1);
    datC1.setFuente(&gen2);

    /*Prueba 3: asigna los tres dispositivos al dataCenter, capturando cualquier excepción que pueda lanzar.*/

    Dispositivo disp4("Ejemplo", 20);
    datC1.Instala(disp4);

    /*Prueba 4: Crea un DataCenter que sea copia del que ya existe.
     Para la copia, enciende sus dos primeros dispositivos,
     visualiza el consumo actual del DataCenter y el número de dispositivos que tiene.*/
    DataCenter datC2;
    datC2 = datC1;

    datC2.setTamArrayDispositivo(2);
    datC2.Instala(disp1);
    datC2.Instala(disp2);
    datC2.consumoActual();

    std::cout << "El consumo total del DataCenter copia del 1 es de" << datC2.consumoActual() << std::endl;

    return 0;
}
