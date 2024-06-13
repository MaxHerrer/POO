#ifndef CARRITO_H
#define CARRITO_H

#include <iostream>
#include <vector>
#include <string>
#include "Producto.h"
#include "Paqueteria.h"
#include "Envio.h"
#include "EnvioNormal.h"
#include "EnvioRapido.h"
#include "Lugar.h"
#include "Factura.h"

class Carrito {
private:
    std::vector<Producto> productos;
    std::vector<Paqueteria> paqueterias; 
    Envio* envio; 
    Lugar lugarEnvio; 

public:
    Carrito(); // Constructor
    int mostrarMenu(); 
    void mostrarCarrito(); 
    void mostrarPaqueterias();
    void seleccionarTipoEnvio(); 
    void agregarProducto(); 
    void agregarProducto(const std::string& nombre, double precio); // Sobrecarga
    void agregarPaqueteria(); 
    void agregarDireccion();
    void mostrarDireccion();
    void confirmarCompra();
    void limpiar(); 
    ~Carrito(); // Destructor

    double calcularPrecioTotal(); 
};

Carrito::Carrito() : envio(nullptr), lugarEnvio("", "", "") {}

int Carrito::mostrarMenu() {
    int opcion;
    std::cout << "\nPedido:\n";
    std::cout << "1. Mostrar carrito\n";
    std::cout << "2. Mostrar dirección de envío\n";
    std::cout << "3. Mostrar paqueterias\n";
    std::cout << "4. Agregar productos al carrito\n";
    std::cout << "5. Agregar paqueteria\n";
    std::cout << "6. Agregar dirección de envío\n";
    std::cout << "7. Seleccionar tipo de envio\n";
    std::cout << "8. Confirmar compra\n";
    std::cout << "9. Salir\n";
    std::cout << "Ingrese una opcion: ";
    std::cin >> opcion;
    std::cin.ignore(); // Limpiar el buffer
    return opcion;
}

void Carrito::mostrarCarrito() {
    std::cout << "\nProductos en el carrito:\n";
    for (size_t i = 0; i < productos.size(); ++i) {
        std::cout << "Nombre: " << productos[i].getNombre() << ", Precio: $" << productos[i].getPrecio() << std::endl;
    }
}

void Carrito::mostrarPaqueterias() {
    std::cout << "\nPaqueterias disponibles:\n";
    for (size_t i = 0; i < paqueterias.size(); ++i) {
        std::cout << "Empresa: " << paqueterias[i].getEmpresa() << ", Telefono: " << paqueterias[i].getTelefono() << std::endl;
    }
}

void Carrito::seleccionarTipoEnvio() {
    if (productos.empty()) {
        std::cout << "No hay productos en el carrito para seleccionar un tipo de envío.\n";
        return;
    }

    int tipoEnvio;
    std::cout << "\nTipos de envío disponibles:\n";
    std::cout << "1. Envío Normal ($50)\n";
    std::cout << "2. Envío Rápido ($100)\n";
    std::cout << "Seleccione el tipo de envío: ";
    std::cin >> tipoEnvio;
    std::cin.ignore(); // Limpiar el buffer 

    if (envio != nullptr) {
        delete envio; // Eliminar el envío anterior
    }

    // Polimorfismo: uso de clases derivadas de Envio
    if (tipoEnvio == 1) {
        envio = new EnvioNormal(productos.back(), lugarEnvio);
    } else if (tipoEnvio == 2) {
        envio = new EnvioRapido(productos.back(), lugarEnvio);
    } else {
        std::cout << "Opción inválida.\n";
        return;
    }

    std::cout << "Tipo de envío seleccionado: " << envio->tipoEnvio() << "\n";
}

void Carrito::agregarProducto() {
    std::string nombreProducto;
    double precioProducto;

    std::cout << "Ingrese el nombre del producto: ";
    std::getline(std::cin, nombreProducto);
    std::cout << "Ingrese el precio del producto: ";
    std::cin >> precioProducto;
    std::cin.ignore(); // Limpiar el buffer 
    
    productos.push_back(Producto(nombreProducto, precioProducto));
    std::cout << "Producto agregado al carrito.\n";
}

// Método sobrecargado para agregar producto
void Carrito::agregarProducto(const std::string& nombreProducto, double precioProducto) {
    productos.push_back(Producto(nombreProducto, precioProducto));
    std::cout << "Producto agregado al carrito.\n";
}

void Carrito::agregarPaqueteria() {
    std::string empresa, telefono;

    std::cout << "Ingrese el nombre de la empresa de paquetería: ";
    std::getline(std::cin, empresa);
    std::cout << "Ingrese el número de teléfono de la paquetería: ";
    std::getline(std::cin, telefono);

    paqueterias.push_back(Paqueteria(empresa, telefono));
    std::cout << "Paquetería agregada correctamente.\n";
}

void Carrito::agregarDireccion() {
    std::string direccion, ciudad, estado;

    std::cout << "Ingrese la dirección de envío: ";
    std::getline(std::cin, direccion);
    lugarEnvio.setDireccion(direccion);

    std::cout << "Ingrese la ciudad de envío: ";
    std::getline(std::cin, ciudad);
    lugarEnvio.setCiudad(ciudad);

    std::cout << "Ingrese el estado de envío: ";
    std::getline(std::cin, estado);
    lugarEnvio.setEstado(estado);

    std::cout << "Dirección de envío agregada correctamente.\n";
}

void Carrito::mostrarDireccion() {
    std::cout << "\nDirección de envío:\n";
    std::cout << "Dirección: " << lugarEnvio.getDireccion() << "\n";
    std::cout << "Ciudad: " << lugarEnvio.getCiudad() << "\n";
    std::cout << "Estado: " << lugarEnvio.getEstado() << "\n";
}

void Carrito::confirmarCompra() {
    if (productos.empty() || paqueterias.empty() || envio == nullptr || lugarEnvio.isEmpty()) {
        std::cout << "No se puede confirmar la compra. Asegúrate de tener productos en el carrito, paqueterías disponibles, un tipo de envío seleccionado y una dirección de envío completa.\n";
        return;
    }

    std::cout << "Productos en el carrito:\n";
    for (size_t i = 0; i < productos.size(); ++i) {
        std::cout << "Nombre: " << productos[i].getNombre() << ", Precio: $" << productos[i].getPrecio() << std::endl;
    }

    std::cout << "\nPaqueterias disponibles:\n";
    for (size_t i = 0; i < paqueterias.size(); ++i) {
        std::cout << i + 1 << ". Empresa: " << paqueterias[i].getEmpresa() << ", Teléfono: " << paqueterias[i].getTelefono() << std::endl;
    }

    int opcionPaqueteria;
    std::cout << "Elija una paquetería: ";
    std::cin >> opcionPaqueteria;
    std::cin.ignore(); // Limpiar el buffer
    if (opcionPaqueteria < 1 || opcionPaqueteria > paqueterias.size()) {
        std::cout << "Opción inválida.\n";
        return;
    }
    Paqueteria& paqueteriaElegida = paqueterias[opcionPaqueteria - 1];

    double impuestos = 0.15 * envio->getProducto().getPrecio();
    double total = envio->getProducto().getPrecio() + impuestos + envio->costoEnvio();

    // Mostrar resumen de la compra
    std::cout << "\nResumen de la compra:\n";
    std::cout << "Paquetería: " << paqueteriaElegida.getEmpresa() << std::endl;
    std::cout << "Tipo de envío: " << envio->tipoEnvio() << std::endl;
    std::cout << "Dirección de envío: " << lugarEnvio.getDireccion() << ", " << lugarEnvio.getCiudad() << ", " << lugarEnvio.getEstado() << std::endl;
    std::cout << "Producto: " << envio->getProducto().getNombre() << ", Precio: $" << envio->getProducto().getPrecio() << std::endl;
    std::cout << "Costo de envío: $" << envio->costoEnvio() << std::endl;
    std::cout << "Impuestos (15%): $" << impuestos << std::endl;
    std::cout << "Total a pagar: $" << total << std::endl;

    // Crear la factura
    Factura factura(*envio, total);
    limpiar();
}

void Carrito::limpiar() {
    // Limpiar los vectores y objetos para un nuevo pedido
    productos.clear();
    paqueterias.clear();
    if (envio != nullptr) {
        delete envio; 
        envio = nullptr;
    }
}

Carrito::~Carrito() {
    // Destructor
    limpiar();
}

double Carrito::calcularPrecioTotal() {
    double total = 0.0;
    for (size_t i = 0; i < productos.size(); ++i) {
        total += productos[i].getPrecio();
    }
    return total;
}

#endif // CARRITO_H
