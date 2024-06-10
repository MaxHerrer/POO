#ifndef ENVIOCONCRETO_H
#define ENVIOCONCRETO_H

#include "Envio.h"

//Clase EnvioConcreto
class EnvioConcreto : public Envio {
public:
    // Constructor de EnvioConcreto
    EnvioConcreto(std::time_t llegada, const Producto& producto, const Paqueteria& paqueteria, const std::string& estado, const std::string& ciudad, const std::string& direccion)
        : Envio(llegada, producto, paqueteria, estado, ciudad, direccion) {}

    // Sobreescritura del método getInfo
    virtual std::string getInfo() const override {
        return "Información específica de EnvioConcreto";
    }
};

#endif // ENVIOCONCRETO_H

