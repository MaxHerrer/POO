#ifndef ENVIORAPIDO_H
#define ENVIORAPIDO_H

#include "Envio.h"

// Clase EnvioRapido
class EnvioRapido : public Envio {
public:
    // Constructor de EnvioRapido
    EnvioRapido(std::time_t llegada, const Producto& producto, const Paqueteria& paqueteria, const std::string& estado, const std::string& ciudad, const std::string& direccion)
        : Envio(llegada, producto, paqueteria, estado, ciudad, direccion) {}

    // Sobreescritura del método getInfo
    virtual std::string getInfo() const override {
        return "Información específica de EnvioRapido";
    }

    // Sobreescritura del método costoEnvio
    virtual double costoEnvio() const override {
        return Envio::costoEnvio() + 50.0; // Cargo adicional por envío rápido
    }
};

#endif // ENVIORAPIDO_H
