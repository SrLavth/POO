#ifndef UNTITLED2_AYUDANTE_H
#define UNTITLED2_AYUDANTE_H

#endif //UNTITLED2_AYUDANTE_H

using namespace std;

#include <iostream>
#include <cstring>

class Ayudante{
public:
    Ayudante() = default;
    Ayudante(Ayudante& orig);
    Ayudante(string name_, int duracionAyuda_);
    void setMinutos (int duracionAyuda_);

private:
    string name;
    int duracionAyuda;
};