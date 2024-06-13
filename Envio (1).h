#ifndef ENVIO_H
#define ENVIO_H

#include "Producto.h"
#include "Lugar.h"

// Clase abstracta Envio 
class Envio {
protected:
    Producto producto;
    Lugar lugar; 

public:
    // Constructor 
    Envio(Producto& producto, Lugar& lugar)
        : producto(producto), lugar(lugar) {}

    // Método virtual puro 
    virtual double costoEnvio() = 0;

    // Método virtual puro 
    virtual std::string tipoEnvio() = 0;

    // Destructor virtual
    virtual ~Envio() {}

    Producto getProducto() {
        return producto;
    }

    Lugar getLugar() {
        return lugar;
    }
};

#endif // ENVIO_H
