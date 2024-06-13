#ifndef PAQUETERIA_H
#define PAQUETERIA_H

#include <string>

class Paqueteria {
private:
    std::string nombre; 
    std::string telefono;
    double costoEnvio; 
    double impuestos;

public:
    // Constructor 
    Paqueteria(std::string nombre, std::string telefono)
        : nombre(nombre), telefono(telefono) {}

    std::string& getTelefono() {
        return telefono;
    }

    std::string& getNombre() {
        return nombre;
    }

    void setNombre(std::string& nombre) {
        this->nombre = nombre;
    }

    double getCostoEnvio() {
        return costoEnvio;
    }

    void setCostoEnvio(double costoEnvio) {
        this->costoEnvio = costoEnvio;
    }

    double getImpuestos() {
        return impuestos;
    }

    void setImpuestos(double impuestos) {
        this->impuestos = impuestos;
    }

    std::string& getEmpresa() {
        return nombre;
    }
};

#endif // PAQUETERIA_H
