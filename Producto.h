#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

class Producto {
private:
    std::string nombre;
    double precio;

public:
    Producto(const std::string& nombre, double precio) : nombre(nombre), precio(precio) {}

    std::string getNombre() const { return nombre; }
    double getPrecio() const { return precio; }
};

#endif // PRODUCTO_H
