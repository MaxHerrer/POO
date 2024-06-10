#ifndef FACTURA_H
#define FACTURA_H

#include <string>
#include "Envio.h"

//Clase Factura

class Factura {
private:
    const Envio& envio;
    double impuestos;
    double total;

public:
    // Constructor de Factura
    Factura(const Envio& envio, double impuestos)
        : envio(envio), impuestos(impuestos), total(envio.getProducto().getPrecio() + impuestos) {}

    std::string getInfo() const {
        return "Información de la factura";
    }

    double getImpuestos() const { return impuestos; }
    double getTotal() const { return total; }
};

#endif // FACTURA_H
