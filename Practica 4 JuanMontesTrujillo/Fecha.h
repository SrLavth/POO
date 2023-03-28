using namespace std;

#include <iostream>
#include <cstring>

class Fecha {
public:
    // Constructores
    Fecha() = default;
    Fecha(int dia_, int mes_, int anio_);
    Fecha(const Fecha& orig);

    //Metodos setters y getters
    void setDia (int dia_);
    int getDia () const;
    void setMes (int mes_);
    int getMes () const;
    void setAnio (int anio_);
    int getAnio () const;

    //Transformacion a segundos
    int getTotal() const;

    //Operadores
    bool operator<(const Fecha& f1,const Fecha& f2);
    bool operator==(const Fecha& f1, const Fecha& f2);

private:
    int dia;
    int mes;
    int anio;
};