#include "Envio.h"

// Método getter para obtener la fecha y hora de llegada del envío
std::time_t Envio::getLlegada() const {
    return llegada;
}

// Método setter para establecer la fecha y hora de llegada del envío
void Envio::setLlegada(std::time_t llegada) {
    this->llegada = llegada;
}

// Método getter para obtener el producto enviado
Producto Envio::getProducto() const {
    return producto;
}

// Método setter para establecer el producto enviado
void Envio::setProducto(const Producto& producto) {
    this->producto = producto;
}

// Método getter para obtener la empresa de paquetería
Paqueteria Envio::getPaqueteria() const {
    return paqueteria;
}

// Método setter para establecer la empresa de paquetería
void Envio::setPaqueteria(const Paqueteria& paqueteria) {
    this->paqueteria = paqueteria;
}
