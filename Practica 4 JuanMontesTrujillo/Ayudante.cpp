#include "Ayudante.h"
#include "ParametroNoValido.h"

//Constructores//

//Implementacion del constructor por copia
Ayudante::Ayudante(Ayudante& orig):name(orig.name), duracionAyuda(orig.duracionAyuda){}

//Implementacion del constructor parametrizado
Ayudante::Ayudante(string name_, int duracionAyuda_): name(name_), duracionAyuda(duracionAyuda_){}

//Metodos setters y getters//

//Implementacion del metodo setMinutos

void Ayudante::setMinutos(int duracionAyuda_) {
    if (duracionAyuda_ < 0) {
        throw ParametroNoValido("void Ayudante::setMinutos(int duracionAyuda_)", "Parametros invalidos en el constructor");
    }
    duracionAyuda = duracionAyuda_;
}