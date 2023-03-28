using namespace std;

#include "ParametroNoValido.h"

//Constructores//

//Constructor por defecto no necesita una implementacion so...

//Constructor parametrizado

ParametroNoValido::ParametroNoValido(string origen_, string descripcion_)
    : origen(origen_), descripcion(descripcion_){}

string ParametroNoValido::queOcurre(string origen_, string direccion_) const{
    return origen_ + direccion_;
}