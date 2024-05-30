#include <iostream>
#include <ctime> // Necesario para std::time
#include <vector>
#include "Lugar.h"
#include "Paqueteria.h"
#include "Producto.h"
#include "Factura.h"
#include "Almacen.h"
#include "Envio.h"

int main() {
    // Crear un producto
    Producto producto;
    producto.setNombre("Refrescos");
    producto.setPrecio(25.0);

    // Crear una paquetería
    Paqueteria paqueteria;
    paqueteria.setEmpresa("DHL");
    paqueteria.setTelefono("5539604328");
    paqueteria.setNumeroRastreo("4684528462");

    // Crear un envío
    std::time_t llegada = std::time(0); // Obtener el tiempo actual
    Envio envio(llegada, producto, paqueteria, "Queretaro", "Santiago de Queretaro", "Epigmenio Gonzalez");

    // Crear una factura con el envío
    Factura factura;
    factura.setCostoEnvio(75.0);
    factura.setEnvios({ envio });

    // Crear un almacén
    Almacen almacen("Mexico", "CDMX", "Avenida Siempre Viva", 100, "Almacen Central", llegada);

    // Crear un vector de punteros a Lugar
    std::vector<Lugar*> lugares;
    lugares.push_back(&envio); // Agregar un puntero a objeto Envio
    lugares.push_back(&almacen); // Agregar un puntero a objeto Almacen

    // Usar polimorfismo para imprimir información de cada lugar
    for (const auto& lugar : lugares) {
        std::cout << lugar->getInfo() << std::endl;
    }

    // Imprimir la información del envío
    std::cout << "Información del envío:" << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "Producto: " << envio.getProducto().getNombre() << ", Precio: " << envio.getProducto().getPrecio() << std::endl;
    std::cout << "Llegada: " << std::ctime(&llegada); // Imprimir la hora de llegada formateada
    std::cout << "Paquetería: " << envio.getPaqueteria().getEmpresa() << ", Teléfono: " << envio.getPaqueteria().getTelefono() << ", Número de Rastreo: " << envio.getPaqueteria().getNumeroRastreo() << std::endl;
    std::cout << "Dirección de entrega: " << envio.getDireccion() << ", " << envio.getCiudad() << ", " << envio.getEstado() << std::endl;

    // Imprimir la información de la factura
    std::cout << std::endl;
    std::cout << "Información de la factura:" << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "Costo de envío: " << factura.getCostoEnvio() << std::endl;
    std::cout << "Total Factura: " << factura.calcularTotal() << std::endl;

    return 0;
}
