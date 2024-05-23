#ifndef ENVIO_H
#define ENVIO_H

#include <ctime>
#include "Producto.h" // Incluye la definición de la clase Producto
#include "Paqueteria.h" // Incluye la definición de la clase Paqueteria
#include "Lugar.h" // Incluye la definición de la clase Lugar si es necesario

class Envio {
private:
    std::time_t llegada; // Fecha y hora de llegada del envío
    Producto producto; // Producto enviado
    Paqueteria paqueteria; // Empresa de paquetería
    std::string estado; // Estado del lugar de entrega
    std::string ciudad; // Ciudad del lugar de entrega
    std::string direccion; // Dirección del lugar de entrega

public:
    Envio() {} // Constructor por defecto
    Envio(std::time_t llegada, const Producto& producto, const Paqueteria& paqueteria, const std::string& estado, const std::string& ciudad, const std::string& direccion)
        : llegada(llegada), producto(producto), paqueteria(paqueteria), estado(estado), ciudad(ciudad), direccion(direccion) {} // Constructor con parámetros

    // Métodos getter y setter para la fecha y hora de llegada del envío
    std::time_t getLlegada() const;
    void setLlegada(std::time_t llegada);

    // Métodos getter y setter para el producto enviado
    Producto getProducto() const;
    void setProducto(const Producto& producto);

    // Métodos getter y setter para la empresa de paquetería
    Paqueteria getPaqueteria() const;
    void setPaqueteria(const Paqueteria& paqueteria);

    // Métodos getter y setter para el estado del lugar de entrega
    std::string getEstado() const;
    void setEstado(const std::string& estado);

    // Métodos getter y setter para la ciudad del lugar de entrega
    std::string getCiudad() const;
    void setCiudad(const std::string& ciudad);

    // Métodos getter y setter para la dirección del lugar de entrega
    std::string getDireccion() const;
    void setDireccion(const std::string& direccion);
};

#endif // ENVIO_H
