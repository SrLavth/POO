#include "Garito.h"
#include "ParametroNoValido.h"

using namespace std;

//Vamos a utilizar el .cpp como espejo del .h, de esta forma:

//Constructores//

//Constructor por defecto no necesario de ser implementado por su propia naturaleza so....

//Constructor parametrizado

Garito::Garito(const string nombre_, const string direccion_):nombre(nombre_), direccion(direccion_){
    if (nombre_.empty() || direccion_.empty()) {
        throw ParametroNoValido("Garito::Garito(const string nombre_, const string direccion_):nombre(nombre_), direccion(direccion_)", "Parametros invalidos en el constructor");
    }
}

//Constructor de copia

Garito::Garito(const Garito& orig):nombre(orig.nombre), direccion(orig.direccion){}

//Destructor

Garito::~Garito() {}

//Metodos setters y getters

string Garito::getNombre() const {
    return nombre;
}

void Garito::setNombre(const string nombre_) {
    nombre = nombre_;
    if (nombre_.empty()) {
        throw ParametroNoValido("Garito::setNombre(const string nombre_)", "Parametros invalidos en el nombre");
    }
}

string Garito::getDireccion() const {
    return direccion;
}

void Garito::setDireccion(const string direccion_) {
    direccion = direccion_;
    if (direccion_.empty()) {
        throw ParametroNoValido("Garito::setDireccion(const string direccion_)", "Parametros invalidos en la direccion");
    }
}