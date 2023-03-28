/**
 * @author Juan Montes Trujillo 46096933B
 * @file DataCenter.cpp
 */

#include "DataCenter.h"
#include <stdexcept>

/*Primer ejercicio*/

/**
 * @brief Constructor por defecto
 */
DataCenter::DataCenter() {}

DataCenter::DataCenter(DataCenter &orig):
ubicacion(orig.ubicacion), superficie(orig.superficie), tecnicos(orig.tecnicos), tamArrayDispositivos(orig.tamArrayDispositivos), numDispositivos(orig.numDispositivos){

}

/**
 * @brief Consiste en un metodo constructor de dos parametros
 * @param _superficie: Superficie propia del DataCenter
 * @param _ubicacion: Ubicacion propia del DataCenter
 */
DataCenter::DataCenter(float _superficie, std::string _ubicacion):
superficie(_superficie), ubicacion(_ubicacion) {}

/**
 * @brief Consiste en un destructor que elimina el objeto y destruye toda la memoria dinamica
 * @if "dispositivoAsignados" no esta vacio entonces se pone el puntero a nulo y se elimina la memoria dinamica abierta previamente
 * @if "generadorAsignado" no esta vacio entonce se pondrá el puntero a nullptr y se eliminará el espacio de memoria asignado
 */
DataCenter::~DataCenter(){
    if(dispositivosAsignados != nullptr){
        delete dispositivosAsignados;
        dispositivosAsignados = nullptr;
    }
    if (generadorAsignado != nullptr){
        delete generadorAsignado;
        generadorAsignado = nullptr;
    }
}
/**
 * @brief Consiste en un metodo de asignacion del generador que se pretende asignar
 * @param _generador: Generador que se pretende asignar al determinado DataCenter
 */
void DataCenter::setFuente(Generador *_generador) {
    if(generadorAsignado != nullptr){
        throw std::invalid_argument("El generador se ha de destruir junto con el DataCenter");
    }
    this-> generadorAsignado = _generador;
}

/**@brief Consiste en un metodo que obtiene la potenia del generador asignado al determinado DataCenter
 * @return Potencia propia asignada al generador que compone el DataCenter
 */
float DataCenter::getPotenciaDisponible() {
    if (generadorAsignado == nullptr){
        return 0;
    }
    return generadorAsignado->getPotencia();
}

/**
 * @brief Consiste en una función asignadora de dispositivos en el array de dispositivos pertenecientes al array de Dataenter
 * @param _dispositivo: Dispositivo que se piensa asinar al Data Center
 */
void DataCenter::Instala(Dispositivo &_dispositivo) {

    if(dispositivosAsignados == nullptr){
        throw std::out_of_range("Para instalar dispositivos en un ARRAY de dispositivos, primero ha de existir del determinado ARRAY de dispositivos");
    }
    this ->dispositivosAsignados [numDispositivos] = _dispositivo;
    numDispositivos++;
}

/**
 * @brief Consiste en un metodo GET que pretende enseñar un dispositivo propio del array en una determinada posicion
 * @param _posicion: Posicion del dispositivo que se quiere enseñar con el metodo GET
 * @return Dispositico que se pretende enseñar al final de la funcion
 */
Dispositivo DataCenter::getDispositivo(int _posicion){
    if(dispositivosAsignados == nullptr){
        throw std::out_of_range("Para poder consultar el ARRAY de dispositivos, primero ha de existir");
    }
    if(_posicion < 0 || _posicion >= numDispositivos){
        throw std::out_of_range("Solo se pueden ver dispositivos de posiciones existentes");
    }
    return dispositivosAsignados[_posicion];
}

/**
 * @brief Consiste en un metodo set para asignar el tamano de array de dispositivos del DataCenter
 * @param _tam: Tamaño del array de dispositivos propio del DataCenter que se pretende establecer en el objeto
 */
void DataCenter::setTamArrayDispositivo(int _tam) {
    if(generadorAsignado == nullptr){
        throw std::out_of_range("Para que se pueda crear y establecer el ARRAY de dispositivos, primero se ha contener en el objeto un determinado generador que contenga los dispositivos");
    }
    if(_tam < 0 || _tam > 10){
        throw std::out_of_range("El numero de dispositivos debe de estar en un reango establecido entre 0 y 10");
    }
    this->tamArrayDispositivos = _tam;
    dispositivosAsignados = new Dispositivo[_tam];
}

/**
 * @brief Consiste en un metodo GET que devuelve el numero equivalente al numero de dispositivos
 * @return Numero de dispositivos que se encuentran en el ARRAY de dispositivos
 */
int DataCenter::getNumDispositivos() {
    return numDispositivos;
}

/**
 * @brief Consiste en un metodo dirigido al consumo total de todos los dispositivos pertenecientes al "DataCenter"
 * @return _sum: Sumatoria del consumo de todos los dispositivos pertenecientes al "DataCenter"
 */
float DataCenter::consumoActual() {
    if(dispositivosAsignados == nullptr){
        throw std::out_of_range("Para poder visualizar el consumo total ha de existir el ARRAY que contenga los dispositivos");
    }
    float _sum = 0;
    for(int i = 0; i < numDispositivos; i++){
        _sum =+ dispositivosAsignados[i].getConsumo();
    }
    return _sum;
}

/*Segundo ejercicio*/

/**
 * @brief Consiste en un metodo GET que ensena la ubicacion asignada al "DataCenter"
 * @return ubicacion: Ubicacion asignada al "DataCenter"
 */
std::string DataCenter::getUbicacion() {
    return ubicacion;
}

/**
 * @brief Consiste en un metodo GET que develve la superficie asignada al "DataCenter"
 * @return superficie: Superfice asignada al "DataCenter"
 */
float DataCenter::getSuperficie() {
    return superficie;
}

/**
 * @brief Consiste en un metodo GET que devuelve los tecnicos asignados al determinado "DataCenter"
 * @return tecnicos: Tecnicos asignados al "DataCenter"
 */
int DataCenter::getTecnicos() {
    return tecnicos;
}

/**
 * @brief Consiste en un metodo GET que devuelve el generador asignado al "DataCenter"
 * @return generadorAsignado: Generador asignado al determinado "DataCenter"
 */
Generador DataCenter::getGenerador() {
    return *generadorAsignado;
}

/**
 * @brief Consiste en un metodo GET que devuelve el numero de extension que tiene el array de dispositivos del "DataCenter"
 * @return tamArrayDispositivos: Tamano del array de dispositivos del "DataCenter"
 */
int DataCenter::getTamArrayDispositivos() {
    return tamArrayDispositivos;
}

/**
 * @brief Consiste en un metodo SET que establece el numero de tecnicos del "DataCenter"
 * @param _tecnicos: Numero de ingenieros que se pretenden establecer en "DataCenter"
 * @idlexcept En caso de que el parametro "_tecnicos" no este en el rango [1-4]
 */
void DataCenter::setTecnicos(int _tecnicos) {
    if (_tecnicos < 1 || _tecnicos > 4){
        throw std::out_of_range("El numero de tecnicos ha de estar establecido entre el rango de 1 y 4");
    }
    this->tecnicos = tecnicos;
}
