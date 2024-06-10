#ifndef LUGAR_H
#define LUGAR_H

#include <string>

//Clase abstracta Lugar
class Lugar {
protected:
    std::string estado;
    std::string ciudad; 
    std::string direccion;

public:
    // Constructor de Lugar
    Lugar(const std::string& estado, const std::string& ciudad, const std::string& direccion)
        : estado(estado), ciudad(ciudad), direccion(direccion) {}

    // Método virtual puro
    virtual std::string getInfo() const = 0;

    // Destructor virtual por defecto
    virtual ~Lugar() = default;
};

#endif // LUGAR_H
