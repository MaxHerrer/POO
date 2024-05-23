#include "Almacen.h"

// Método getter para obtener la capacidad del almacén
int Almacen::getCapacidad() const {
    return capacidad;
}

// Método setter para establecer la capacidad del almacén
void Almacen::setCapacidad(int capacidad) {
    this->capacidad = capacidad;
}

// Método getter para obtener la fecha y hora de llegada al almacén
std::time_t Almacen::getLlegada() const {
    return llegada;
}

// Método setter para establecer la fecha y hora de llegada al almacén
void Almacen::setLlegada(std::time_t llegada) {
    this->llegada = llegada;
}

// Método getter para obtener la descripción del almacén
std::string Almacen::getDescripcion() const {
    return descripcion;
}

// Método setter para establecer la descripción del almacén
void Almacen::setDescripcion(const std::string& descripcion) {
    this->descripcion = descripcion;
}
