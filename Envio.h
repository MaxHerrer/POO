#ifndef ENVIO_H
#define ENVIO_H

#include <ctime>
#include "Producto.h" // Incluye la definición de la clase Producto
#include "Paqueteria.h" // Incluye la definición de la clase Paqueteria
#include "Lugar.h" // Incluye la definición de la clase Lugar

class Envio : public Lugar {
private:
    std::time_t llegada; // Fecha y hora de llegada del envío
    Producto producto; // Producto enviado
    Paqueteria paqueteria; // Empresa de paquetería

public:
    Envio() {} // Constructor por defecto
    Envio(std::time_t llegada, const Producto& producto, const Paqueteria& paqueteria, const std::string& estado, const std::string& ciudad, const std::string& direccion)
        : Lugar(estado, ciudad, direccion), llegada(llegada), producto(producto), paqueteria(paqueteria) {} // Constructor con parámetros

    // Métodos getter y setter para la fecha y hora de llegada del envío
    std::time_t getLlegada() const;
    void setLlegada(std::time_t llegada);

    // Métodos getter y setter para el producto enviado
    Producto getProducto() const;
    void setProducto(const Producto& producto);

    // Métodos getter y setter para la empresa de paquetería
    Paqueteria getPaqueteria() const;
    void setPaqueteria(const Paqueteria& paqueteria);

    // Método para obtener la información del envío
    std::string getInfo() const override {
        return Lugar::getInfo() + ", Producto: " + producto.getNombre() + ", Precio: " + std::to_string(producto.getPrecio()) +
               ", Paquetería: " + paqueteria.getEmpresa();
    }
};

#endif // ENVIO_H
