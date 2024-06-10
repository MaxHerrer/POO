#ifndef ENVIO_H
#define ENVIO_H

#include <string>
#include <ctime>
#include "Producto.h"
#include "Paqueteria.h"

// Clase Envio
class Envio {
public:
    // Constructor de Envio
    Envio(std::time_t llegada, const Producto& producto, const Paqueteria& paqueteria, const std::string& estado, const std::string& ciudad, const std::string& direccion)
        : llegada(llegada), producto(producto), paqueteria(paqueteria), estado(estado), ciudad(ciudad), direccion(direccion) {}

    // Método virtual puro
    virtual std::string getInfo() const = 0;

    // Método virtual para calcular el costo de envío
    virtual double costoEnvio() const { return 20.0; } // Costo base de envío

    // Métodos de acceso
    std::time_t getLlegada() const { return llegada; }
    const Producto& getProducto() const { return producto; }

protected:
    std::time_t llegada;
    Producto producto;
    Paqueteria paqueteria;
    std::string estado;
    std::string ciudad;
    std::string direccion;
};

#endif // ENVIO_H
