#include "Producto.h"

// Método getter para obtener el nombre del producto
std::string Producto::getNombre() const {
    return nombre;
}

// Método setter para establecer el nombre del producto
void Producto::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

// Método getter para obtener el precio del producto
double Producto::getPrecio() const {
    return precio;
}

// Método setter para establecer el precio del producto
void Producto::setPrecio(double precio) {
    this->precio = precio;
}
