#ifndef ENVIOCONCRETO_H
#define ENVIOCONCRETO_H

#include "Envio.h" 

class EnvioConcreto : public Envio {
public:
    EnvioConcreto(std::time_t llegada, const Producto& producto, const Paqueteria& paqueteria, const std::string& estado, const std::string& ciudad, const std::string& direccion)
        : Envio(llegada, producto, paqueteria, estado, ciudad, direccion) {}

    virtual std::string getInfo() const override {
        return "Información específica de EnvioConcreto";
    }
};

#endif // ENVIO_CONCRETO_H
