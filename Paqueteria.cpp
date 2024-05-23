#include "Paqueteria.h"

// Método getter para obtener el nombre de la empresa de paquetería
std::string Paqueteria::getEmpresa() const {
    return empresa;
}

// Método setter para establecer el nombre de la empresa de paquetería
void Paqueteria::setEmpresa(const std::string& empresa) {
    this->empresa = empresa;
}

// Método getter para obtener el número de teléfono de la empresa de paquetería
std::string Paqueteria::getTelefono() const {
    return telefono;
}

// Método setter para establecer el número de teléfono de la empresa de paquetería
void Paqueteria::setTelefono(const std::string& telefono) {
    this->telefono = telefono;
}

// Método getter para obtener el número de rastreo del paquete
std::string Paqueteria::getNumeroRastreo() const {
    return numeroRastreo;
}

// Método setter para establecer el número de rastreo del paquete
void Paqueteria::setNumeroRastreo(const std::string& numeroRastreo) {
    this->numeroRastreo = numeroRastreo;
}
