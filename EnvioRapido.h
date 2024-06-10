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
        return "Información específica del envio rapido";
    }

    // Sobreescritura del método costoEnvio
    virtual double costoEnvio() const override {
        return 25.0; // Costo base de envío rapido
    }
};

#endif // ENVIORAPIDO_H
