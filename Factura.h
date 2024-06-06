#ifndef FACTURA_H
#define FACTURA_H

#include <string>
#include "Envio.h"

class Factura {
private:
    const Envio& envio;
    double impuestos;
    double total;

public:
    Factura(const Envio& envio, double impuestos)
        : envio(envio), impuestos(impuestos), total(envio.getProducto().getPrecio() + impuestos) {}

    std::string getInfo() const {
        return "Información de la factura";
    }

    double getImpuestos() const;
    double getTotal() const;
};

#endif // FACTURA_H
