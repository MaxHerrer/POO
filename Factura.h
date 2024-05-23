#ifndef FACTURA_H
#define FACTURA_H

#include <vector>
#include "Envio.h" // Incluye la definición de la clase Envio

class Factura {
private:
    double costoEnvio; // Costo total del envío
    std::vector<Envio> envios; // Vector de objetos de clase Envio que representa los envíos

public:
    Factura() {} // Constructor por defecto
    Factura(double costoEnvio, const std::vector<Envio>& envios)
        : costoEnvio(costoEnvio), envios(envios) {} // Constructor con parámetros

    double calcularTotal() const; // Método para calcular el costo total de la factura

    // Métodos getter y setter para el costo del envío
    double getCostoEnvio() const;
    void setCostoEnvio(double costoEnvio);

    // Métodos getter y setter para los envíos
    const std::vector<Envio>& getEnvios() const;
    void setEnvios(const std::vector<Envio>& envios);
};

#endif // FACTURA_H
