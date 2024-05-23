#include "Factura.h"

// Método para calcular el costo total de la factura
double Factura::calcularTotal() const {
    double total = costoEnvio; // Inicializa el total con el costo de envío
    for (const Envio& envio : envios) {
        // Suma el precio de cada producto enviado al total
        total += envio.getProducto().getPrecio();
    }
    return total; // Retorna el costo total
}

// Método getter para obtener el costo de envío
double Factura::getCostoEnvio() const {
    return costoEnvio;
}

// Método setter para establecer el costo de envío
void Factura::setCostoEnvio(double costoEnvio) {
    this->costoEnvio = costoEnvio;
}

// Método getter para obtener los envíos
const std::vector<Envio>& Factura::getEnvios() const {
    return envios;
}

// Método setter para establecer los envíos
void Factura::setEnvios(const std::vector<Envio>& envios) {
    this->envios = envios;
}
