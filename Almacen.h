#ifndef ALMACEN_H
#define ALMACEN_H

#include <string>
#include <ctime>
#include "Lugar.h" // Incluye la definición de la clase Lugar

class Almacen : public Lugar { // Hereda de la clase Lugar
private:
    int capacidad; // Capacidad del almacén
    std::string descripcion; // Descripción del almacén
    std::time_t llegada; // Fecha y hora de llegada al almacén

public:
    Almacen() {} // Constructor por defecto
    Almacen(const std::string& estado, const std::string& ciudad, const std::string& direccion, 
            int capacidad, const std::string& descripcion, std::time_t llegada)
        : Lugar(estado, ciudad, direccion), capacidad(capacidad), descripcion(descripcion), llegada(llegada) {} // Constructor con parámetros

    // Métodos getter y setter para la capacidad del almacén
    int getCapacidad() const;
    void setCapacidad(int capacidad);

    // Métodos getter y setter para la fecha y hora de llegada al almacén
    std::time_t getLlegada() const;
    void setLlegada(std::time_t llegada);

    // Métodos getter y setter para la descripción del almacén
    std::string getDescripcion() const;
    void setDescripcion(const std::string& descripcion);

    // Sobrecarga del método virtual para obtener información del almacén
    std::string getInfo() const override {
        return Lugar::getInfo() + ", Capacidad: " + std::to_string(capacidad) + ", Descripcion: " + descripcion + ", Llegada: " + std::ctime(&llegada);
    }
};

#endif // ALMACEN_H
