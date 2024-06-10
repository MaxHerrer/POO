#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

//Clase Producto
class Producto {
private:
    std::string nombre;
    double precio;

public:
    // Constructor de Producto
    Producto(const std::string& nombre, double precio) : nombre(nombre), precio(precio) {}

    std::string getNombre() const { return nombre; }
    double getPrecio() const { return precio; }
};

#endif // PRODUCTO_H
