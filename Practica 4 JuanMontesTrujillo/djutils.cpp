#include "djutils.h"

void mostrarTemazo(const Temazo& t) {
    cout << "Titulo: " << t.getTitle() << endl;
    cout << "Autor: " << t.getAutor() << endl;
    cout << "Duracion: " << t.getExtension() << endl;
    cout << "Ultimo Garito: " << t.getNombreUltimoGarito() << endl;
    cout << "Ultima fecha de uso: ";
    mostrarFecha(t.getFechaUltimoUso());
    cout << endl;
}

void mostrarGarito(const Garito& g) {
    cout << "Nombre: " << g.getNombre() << endl;
    cout << "Direccion: " << g.getDireccion() << endl;
    cout << endl;
}

void mostrarFecha(const Fecha& f) {
    cout << "Fecha: " << f.getDia() << "/" << f.getMes() << "/" << f.getAnio() << endl;
    cout << endl;
}

void modificarGarito(Garito& g) {
    string nombre, direccion;

    cout << "Introduzca el nuevo nombre del garito: ";
    getline(cin, nombre);

    cout << "Introduzca la nueva dirección del garito: ";
    getline(cin, direccion);

    try {
        g.setNombre(nombre);
        g.setDireccion(direccion);
    } catch (const string& e) {
        cerr << "Error: " << e << endl;
    }
}

void mostrarTemazosAnteriores(Temazo temazos[], int tam, Fecha fechaLimite) {
    cout << "Temazos anteriores a la fecha: ";
    fechaLimite.getAnio();
    cout << "/";
    fechaLimite.getMes();
    cout << "/";
    fechaLimite.getDia();
    cout << endl;

    for (int i = 0; i < tam; i++) {
        if (temazos[i].getFechaUltimoUso.getTotal() < fechaLimite.getTotal()) {
            mostrarTemazo(temazos[i]);
        }
    }
}

Temazo mostrarTemazoDeMayorDuracion(Temazo* t[], int tam){
    Temazo mayorDuracion;
    for(int i = 0; i < tam; i++){
        *t[i] < mayorDuracion;
    };

    cout << "Titulo: " << mayorDuracion.getTitle() << endl;
    cout << "Autor: " << mayorDuracion.getAutor() << endl;
    cout << "Duracion: " << mayorDuracion.getExtension() << endl;
    cout << "Ultimo Garito: " << mayorDuracion.getNombreUltimoGarito() << endl;
    cout << "Ultima fecha de uso: ";
    mostrarFecha(mayorDuracion.getFechaUltimoUso());
    cout << endl;

    return mayorDuracion;
}