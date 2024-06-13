#ifndef LUGAR_H
#define LUGAR_H

#include <string>

class Lugar {
private:
    std::string direccion; 
    std::string ciudad; 
    std::string estado; 

public:
    // Constructor 
    Lugar(std::string direccion, std::string ciudad, std::string estado)
        : direccion(direccion), ciudad(ciudad), estado(estado) {}

    // Constructor por defecto
    Lugar() : direccion(""), ciudad(""), estado("") {}

    std::string& getDireccion() {
        return direccion;
    }

    void setDireccion(std::string& direccion) {
        this->direccion = direccion;
    }

    std::string& getCiudad() {
        return ciudad;
    }

    void setCiudad(std::string& ciudad) {
        this->ciudad = ciudad;
    }

    std::string& getEstado() {
        return estado;
    }

    void setEstado(std::string& estado) {
        this->estado = estado;
    }

    // Método para verificar si el lugar está vacío
    bool isEmpty() {
        return direccion.empty() || ciudad.empty() || estado.empty();
    }
};

#endif // LUGAR_H
