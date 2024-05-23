#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

class Producto {
private:
    std::string nombre; // Nombre del producto
    double precio; // Precio del producto

public:
    // Métodos getter y setter para el nombre del producto
    std::string getNombre() const;
    void setNombre(const std::string& nombre);

    // Métodos getter y setter para el precio del producto
    double getPrecio() const;
    void setPrecio(double precio);
};

#endif // PRODUCTO_H
