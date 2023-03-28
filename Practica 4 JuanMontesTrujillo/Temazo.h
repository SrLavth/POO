#include "Fecha.h"

#include <iostream>
#include <string>

using namespace std;

class  Temazo {
public:
    Temazo() = default;
    Temazo(string title_, string autor_, int extension_, string nombreUltiomoGarito_, Fecha fechaUltimoUso_);
    Temazo(string title_, string autor_, int extension_);
    Temazo(const Temazo& orig);

    string getTitle() const;
    void setTitle(string title_);
    string getAutor() const;
    void setAutor(string autor_);
    int getExtension() const;
    void setExtension(int extension_);
    string getNombreUltimoGarito() const;
    void setNombreUltimoGarito(string nombreUltimoGarito_);
    Fecha getFechaUltimoUso() const;
    void setFechaUltimoUso (Fecha fechaUltimoUso_);
    int getMidReview() const;

    //Operadores
    bool operator<(const Temazo& t1);

    ~Temazo();

private:
    string title;
    string autor;
    int extension;
    int midReview;
    string nombreUltimoGarito;
    Fecha fechaUltimoUso;

};
