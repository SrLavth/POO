#include "Temazo.h"
#include "ParametroNoValido.h"

//Vamos a tratar rl .cpp como si fuera un espejo del .h, de esta forma:

//Constructores//

// Constructor por defecto, no necesario de implementar so...

// Constructor parametrizado, creado por medio de una secuencia de inicialización
// Añadido de una clase que lanza una excepción en casos de que el titulo/autor este vacio o la extension sea menor de 0
Temazo::Temazo(string title_, string autor_, int extension_, string nombreUltimoGarito_, Fecha fechaUltimoUso_)
        : title(title_), autor(autor_), extension(extension_), nombreUltimoGarito(nombreUltimoGarito_), fechaUltimoUso(fechaUltimoUso_){
    if (title_.empty() || autor_.empty() || extension_ < 0) {
        throw ParametroNoValido("Temazo::Temazo(string title_, string autor_, int extension_)", "Parametros invalidos en el constructor");
    }
}

Temazo::Temazo(string title_, string autor_, int extension_)
        : title(title_), autor(autor_), extension(extension_){
    if (title_.empty() || autor_.empty() || extension_ < 0) {
        throw ParametroNoValido("Temazo::Temazo(string title_, string autor_, int extension_)", "Parametros invalidos en el constructor");
    }
}


// Constructor de copia
Temazo::Temazo(const Temazo& orig)
        : title(orig.title), autor(orig.autor), extension(orig.extension), midReview(orig.midReview), nombreUltimoGarito(orig.nombreUltimoGarito), fechaUltimoUso(orig.fechaUltimoUso) {}

// Métodos getters y setters, en este caso los metodos set y get concretamente se definen por medio de
//los apartados de función
string Temazo::getTitle() const {
    return title;
}

void Temazo::setTitle(string title_) {
    title = title_;
}

string Temazo::getAutor() const {
    return autor;
}

void Temazo::setAutor(string autor_) {
    autor = autor_;
}

int Temazo::getExtension() const {
    return extension;
}

void Temazo::setExtension(int extension_) {
    extension = extension_;
}

int Temazo::getMidReview() const {
    return midReview;
}

string Temazo::getNombreUltimoGarito() const {
    return nombreUltimoGarito;
}

void Temazo:: setNombreUltimoGarito(string nombreUltimoGarito_){
    nombreUltimoGarito = nombreUltimoGarito_;
}

Fecha Temazo::getFechaUltimoUso() const{
    return fechaUltimoUso;
}

void Temazo::setFechaUltimoUso (Fecha fechaUltimoUso_){
    fechaUltimoUso = fechaUltimoUso_;
}

//Operadores
bool Temazo::operator<(const Temazo& t2){
    if( extension < t2.getExtension()){
        return true;
    }
    return false;
}

// Destructor
Temazo::~Temazo() {
    // Aquí se podrían liberar recursos, si es necesario
}