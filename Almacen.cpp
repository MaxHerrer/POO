#include "Almacen.h"

int Almacen::getCapacidad() const {
    return capacidad;
}

void Almacen::setCapacidad(int capacidad) {
    this->capacidad = capacidad;
}

std::time_t Almacen::getLlegada() const {
    return llegada;
}

void Almacen::setLlegada(std::time_t llegada) {
    this->llegada = llegada;
}

std::string Almacen::getDescripcion() const {
    return descripcion;
}

void Almacen::setDescripcion(const std::string& descripcion) {
    this->descripcion = descripcion;
}
