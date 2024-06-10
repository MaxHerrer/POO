#ifndef ENVIONORMAL_H
#define ENVIONORMAL_H

#include "Envio.h"

// Clase EnvioNormal

class EnvioNormal : public Envio {
public:
    // Constructor de EnvioNormal
    EnvioNormal(std::time_t llegada, const Producto& producto, const Paqueteria& paqueteria, const std::string& estado, const std::string& ciudad, const std::string& direccion)
        : Envio(llegada, producto, paqueteria, estado, ciudad, direccion) {}

    // Sobreescritura del método getInfo
    virtual std::string getInfo() const override {
        return "Información específica del envio normal";
    }
};

#endif // ENVIONORMAL_H
