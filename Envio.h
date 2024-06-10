#ifndef ENVIO_H
#define ENVIO_H

#include <string>
#include <ctime>
#include "Producto.h"
#include "Paqueteria.h"
#include "Lugar.h"

// Clase abstracta Envio
class Envio {
protected:
    std::time_t llegada;
    Producto producto;
    Paqueteria paqueteria;
    std::string estado;
    std::string ciudad;
    std::string direccion;

public:
    // Constructor de Envio
    Envio(std::time_t llegada, const Producto& producto, const Paqueteria& paqueteria, const std::string& estado, const std::string& ciudad, const std::string& direccion)
        : llegada(llegada), producto(producto), paqueteria(paqueteria), estado(estado), ciudad(ciudad), direccion(direccion) {}

    // Método virtual puro
    virtual std::string getInfo() const = 0;

    // Método de acceso
    std::time_t getLlegada() const { return llegada; }
    const Producto& getProducto() const { return producto; }

};

#endif // ENVIO_H
