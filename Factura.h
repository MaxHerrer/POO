#ifndef FACTURA_H
#define FACTURA_H

#include <string>
#include "Envio.h"

//Clase Factura

class Factura {
private:
    const Envio* envio;
    double impuestos;
    double total;

public:
    // Constructor de Factura
    Factura(const Envio* envio) : envio(envio) {}

    std::string getInfo() const {
        std::string info = "Información de la factura\n";
        info += "Costo de envío: $" + std::to_string(envio->costoEnvio()) + "\n";
        info += "Precio del producto: $" + std::to_string(envio->getProducto().getPrecio()) + "\n";
        info += "Total: $" + std::to_string(envio->costoEnvio() + envio->getProducto().getPrecio()) + "\n";
        return info;
    }
};

#endif // FACTURA_H
