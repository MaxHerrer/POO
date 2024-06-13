#ifndef FACTURA_H
#define FACTURA_H

#include <string>
#include "Envio.h"

class Factura {
private:
    Envio& envio;
    double total;

public:
    // Constructor
    Factura(Envio& envio, double total)
        : envio(envio), total(total) {}

    std::string getInfo();

    double getTotal() {
        return total;
    }
};

#endif // FACTURA_H
