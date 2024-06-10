#include <iostream>
#include <vector>
#include <ctime>
#include "Factura.h"
#include "EnvioConcreto.h"

int main() {
    std::string nombreProducto, empresaPaqueteria, telefonoPaqueteria, numeroRastreo;
    std::string estado, ciudad, direccion;
    double precioProducto, impuestos;

    // Solicitar datos del producto
    std::cout << "Ingrese el nombre del producto: ";
    std::getline(std::cin, nombreProducto);
    std::cout << "Ingrese el precio del producto: ";
    std::cin >> precioProducto;
    std::cin.ignore(); // Para limpiar el buffer

    // Solicitar datos de la paqueteria
    std::cout << "Ingrese la empresa de paquetería: ";
    std::getline(std::cin, empresaPaqueteria);
    std::cout << "Ingrese el teléfono de la paquetería: ";
    std::getline(std::cin, telefonoPaqueteria);
    std::cout << "Ingrese el número de rastreo: ";
    std::getline(std::cin, numeroRastreo);

    // Solicitar datos del lugar (envío)
    std::cout << "Ingrese el estado del lugar: ";
    std::getline(std::cin, estado);
    std::cout << "Ingrese la ciudad del lugar: ";
    std::getline(std::cin, ciudad);
    std::cout << "Ingrese la dirección del lugar: ";
    std::getline(std::cin, direccion);

    // Crear objetos con los datos ingresados
    Producto producto(nombreProducto, precioProducto);
    Paqueteria paqueteria(empresaPaqueteria, telefonoPaqueteria, numeroRastreo);
    EnvioConcreto envio(time(0), producto, paqueteria, estado, ciudad, direccion); // Crear una instancia de la subclase concreta

    // Solicitar datos de la factura
    std::cout << "Ingrese el monto de impuestos: ";
    std::cin >> impuestos;

    // Crear el objeto Factura
    Factura factura(envio, impuestos);

    // Mostrar la información de la factura
    std::cout << factura.getInfo() << std::endl;

    // Mostrar la información del producto utilizando sobrecarga
    std::cout << producto.getInfo() << std::endl;     
    std::cout << producto.getInfo(true) << std::endl;    

    return 0;
}

