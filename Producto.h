#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

// Clase Producto
class Producto {
private:
    std::string nombre;
    double precio;

public:
    // Constructor de Producto
    Producto(const std::string& nombre, double precio) : nombre(nombre), precio(precio) {}

    std::string getNombre() const { return nombre; }
    double getPrecio() const { return precio; }

    // Método sobrecargado para obtener información del producto
    std::string getInfo() const {
        return "Producto: " + nombre + ", Precio: " + std::to_string(precio);
    }

    // Sobrecarga del método getInfo
    std::string getInfo(bool detailed) const {
        if (detailed) {
            return "Producto detallado: " + nombre + ", Precio detallado: " + std::to_string(precio);
        } else {
            return getInfo();
        }
    }
};

#endif // PRODUCTO_H
