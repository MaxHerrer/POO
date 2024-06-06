#ifndef ENVIO_H
#define ENVIO_H

#include <string>
#include <ctime>
#include "Producto.h"
#include "Paqueteria.h"
#include "Lugar.h" 

class Envio {
public:
    Envio(std::time_t llegada, const Producto& producto, const Paqueteria& paqueteria, const std::string& estado, const std::string& ciudad, const std::string& direccion)
        : llegada(llegada), producto(producto), paqueteria(paqueteria), estado(estado), ciudad(ciudad), direccion(direccion) {}

    virtual std::string getInfo() const = 0;
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
