using namespace std;

#include <iostream>
#include <cstring>

class Garito {
public:

    // Constructores
    Garito() = default;
    Garito(string nombre_, string direccion_);
    Garito(const Garito& orig);

    // Destructor
    ~Garito();

    // Getters y setters
    string getNombre() const;
    void setNombre(string nombre_);
    string getDireccion() const;
    void setDireccion(string direccion_);

private:

    //Atributos asignados en privado
    std::string nombre;
    std::string direccion;
};