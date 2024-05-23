#ifndef LUGAR_H
#define LUGAR_H

#include <string>

class Lugar {
private:
    std::string estado; // Estado del lugar
    std::string ciudad; // Ciudad del lugar
    std::string direccion; // Dirección del lugar

public:
    Lugar() {} // Constructor por defecto
    Lugar(const std::string& estado, const std::string& ciudad, const std::string& direccion)
        : estado(estado), ciudad(ciudad), direccion(direccion) {} // Constructor con parámetros

    // Métodos para acceder y modificar el estado
    std::string getEstado() const;
    void setEstado(const std::string& estado);

    // Métodos para acceder y modificar la ciudad
    std::string getCiudad() const;
    void setCiudad(const std::string& ciudad);

    // Métodos para acceder y modificar la dirección
    std::string getDireccion() const;
    void setDireccion(const std::string& direccion);

    // Método virtual para obtener información del lugar
    virtual std::string getInfo() const {
        return "Estado: " + estado + ", Ciudad: " + ciudad + ", Direccion: " + direccion;
    }

    virtual ~Lugar() {} // Destructor virtual
};

#endif // LUGAR_H
