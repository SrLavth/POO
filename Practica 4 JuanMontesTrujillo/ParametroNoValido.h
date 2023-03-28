using namespace std;

#include <iostream>
#include <cstring>

class ParametroNoValido {
public:
    ParametroNoValido (string origen_, string descripcion_);
    string queOcurre (string origen_, string direccion_) const;


private:
    string origen;
    string descripcion;
};