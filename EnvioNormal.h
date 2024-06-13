#ifndef ENVIO_NORMAL_H
#define ENVIO_NORMAL_H

#include "Envio.h"

// Clase derivada EnvioNormal
class EnvioNormal : public Envio {
public:
    // Constructor
    EnvioNormal(Producto& producto, Lugar& lugar) : Envio(producto, lugar) {}

    // Sobreescritura del método costoEnvio
    double costoEnvio() {
        return 50.0;
    }

    // Sobreescritura del método tipoEnvio
    std::string tipoEnvio() {
        return "Normal";
    }
};

#endif // ENVIO_NORMAL_H
