#include <iostream>
#include "djutils.h"
#include "ParametroNoValido.h"

using namespace std;

int main() {

    // Crear los objetos necesarios
    Temazo t1;
    Temazo t2("Titulo de temazo", "Autor de temazo", 180);

    Garito g1("Garito chulo", "Calle de la fiesta 12");
    Garito g2(g1);

    Fecha f1;
    Fecha f2(28, 2, 2023);

    // Mostrar los datos de los objetos usando las funciones del módulo auxiliar
    mostrarTemazo(t1);
    mostrarTemazo(t2);

    mostrarGarito(g1);
    mostrarGarito(g2);

    mostrarFecha(f1);
    mostrarFecha(f2);

    // Modificar los datos del segundo Garito y mostrarlos en pantalla
    try {
        modificarGarito(g2);
        mostrarGarito(g2);
    } catch (const ParametroNoValido& e) {
        cerr << "ERROR: " << e.queOcurre("Garito:modificarGarito",":Le han sido introducido parametros no validos") << endl;
    }

    // Menú opcional
    int opcion;
    do {
        cout << "MENÚ" << endl;
        cout << "1. Mostrar datos de los Temazos" << endl;
        cout << "2. Mostrar datos de los Garitos" << endl;
        cout << "3. Mostrar datos de las Fechas" << endl;
        cout << "4. Modificar datos del segundo Garito" << endl;
        cout << "5. Terminar el programa" << endl;
        cout << "Elige una opción: ";
        cin >> opcion;
        cout << endl;

        switch (opcion) {
            case 1:
                mostrarTemazo(t1);
                mostrarTemazo(t2);
                break;
            case 2:
                mostrarGarito(g1);
                mostrarGarito(g2);
                break;
            case 3:
                mostrarFecha(f1);
                mostrarFecha(f2);
                break;
            case 4:
                try {
                    modificarGarito(g2);
                    mostrarGarito(g2);
                } catch (const ParametroNoValido& e) {
                    cerr << "ERROR: " << e.queOcurre("Garito:modificarGarito",":Le han sido introducido parametros no validos") << endl;
                }
                break;
            case 5:
                cout << "¡Hasta pronto!" << endl;
                break;
            default:
                cout << "Opción no válida. Inténtalo de nuevo." << endl;
                break;
        }

        cout << endl;
    } while (opcion != 5);

    //Practica 4

    Temazo temazos[20];

    Garito* pMiCasa = new Garito("AlgunaCasa", "CalleInventada");

    Garito* garitos[10];
    garitos[0] = new Garito("Garito0", "CalleDelGarito0");
    garitos[1] = new Garito("Garito1", "CalleDelGarito0");

    temazos[0].setTitle("Temazo 1");
    temazos[0].setAutor("Interprete 1");
    temazos[0].setExtension(180);
    temazos[0].setNombreUltimoGarito(pMiCasa->getNombre());
    temazos[0].setFechaUltimoUso(Fecha(1995, 6, 8));

    temazos[1].setTitle("Temazo 2");
    temazos[1].setAutor("Interprete 2");
    temazos[1].setExtension(200);
    temazos[1].setNombreUltimoGarito(garitos[0]->getNombre());
    temazos[1].setFechaUltimoUso(Fecha(2018, 5, 26));

    temazos[2].setTitle("Temazo 3");
    temazos[2].setAutor("Interprete 3");
    temazos[2].setExtension(240);
    temazos[2].setNombreUltimoGarito(garitos[1]->getNombre());
    temazos[2].setFechaUltimoUso(Fecha(2015, 6, 6));

    Fecha fechaLimite(1, 1, 2016); // 1 de enero de 2016

    //Revisar el djutils.cpp
    mostrarTemazosAnteriores(temazos, 20, fechaLimite);

    //5 punteros a Temazo
    Temazo* temazos0[5];

    temazos0[0] = new Temazo("Temazo0", "Autor0", 10);
    temazos0[1] = new Temazo("Temazo1", "Autor1", 20);
    temazos0[2] = new Temazo("Temazo2", "Autor2", 30);
    temazos0[3] = new Temazo("Temazo3", "Autor3", 40);
    temazos0[4] = new Temazo("Temazo4", "Autor4", 50);

    Temazo mostrarTemazoDeMayorDuracion(Temazo temazos0* [], 5);

    return 0;
}
