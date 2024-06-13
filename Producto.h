#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

class Producto {
private:
    std::string nombre;
    double precio; 

public:
    // Constructor 
    Producto(const std::string& nombre, double precio) 
        : nombre(nombre), precio(precio) {}

    // Constructor por defecto (sobrecarga)
    Producto() : nombre(""), precio(0.0) {}

    std::string getNombre() {
        return nombre;
    }

    double getPrecio() {
        return precio;
    }

    void setNombre(std::string& nombre) {
        this->nombre = nombre;
    }

    void setNombre(char* nombre) {
        this->nombre = std::string(nombre);
    }
};

#endif // PRODUCTO_H
