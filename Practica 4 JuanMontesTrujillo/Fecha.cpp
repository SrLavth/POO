#include "Fecha.h"

using namespace std;

//Constructores//

//Constructor por defecto no necesita ser implementado so...

//Constructor parametrizado

Fecha::Fecha(int dia_, int mes_, int anio_):dia(dia_), mes(mes_), anio(anio_) {}

//Constructor por copia

Fecha::Fecha(const Fecha& orig): dia(orig.dia), mes(orig.mes), anio(orig.anio) {}

//Metodos setters y getters

void Fecha:: setDia (int dia_){
    dia = dia_;
}

int Fecha:: getDia () const {
    return dia;
}

void Fecha:: setMes (int mes_){
    mes = mes_;
}

int Fecha:: getMes () const {
    return mes;
}

void Fecha::setAnio(int anio_) {
    anio = anio_;
}

int Fecha::getAnio() const {
    return anio;
}

//Transformacion a segundos
int Fecha ::getTotal() const{
    return anio*365 + mes*30 + dia;
}
//Operadores
bool operator<(const Fecha& f1, const Fecha& f2){
    if (f1.getTotal() < f2.getTotal()) {
        return true;
    } else if(f1.getTotal() > f2.getTotal() || f1.getTotal() == f2.getTotal()){
        return false;
    }
}

bool operator==(const Fecha& f1, const Fecha& f2){
    if (f1.getTotal() == f2.getTotal()){
        return true;
    } else if(f1.getTotal() < f2.getTotal() || f1.getTotal() > f2.getTotal()){
        return false;
    }
}