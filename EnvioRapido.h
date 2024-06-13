#ifndef ENVIO_RAPIDO_H
#define ENVIO_RAPIDO_H

#include "Envio.h"

// Clase derivada EnvioRapido 
class EnvioRapido : public Envio {
public:
    // Constructor
    EnvioRapido(Producto& producto, Lugar& lugar) : Envio(producto, lugar) {}

    // Sobreescritura del método costoEnvio
    double costoEnvio() {
        return 100.0;
    }

    // Sobreescritura del método tipoEnvio
    std::string tipoEnvio() {
        return "Rápido";
    }
};

#endif // ENVIO_RAPIDO_H
