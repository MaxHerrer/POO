#include "Lugar.h"

// Método getter para obtener el estado del lugar
std::string Lugar::getEstado() const {
    return estado;
}

// Método setter para establecer el estado del lugar
void Lugar::setEstado(const std::string& estado) {
    this->estado = estado;
}

// Método getter para obtener la ciudad del lugar
std::string Lugar::getCiudad() const {
    return ciudad;
}

// Método setter para establecer la ciudad del lugar
void Lugar::setCiudad(const std::string& ciudad) {
    this->ciudad = ciudad;
}

// Método getter para obtener la dirección del lugar
std::string Lugar::getDireccion() const {
    return direccion;
}

// Método setter para establecer la dirección del lugar
void Lugar::setDireccion(const std::string& direccion) {
    this->direccion = direccion;
}
