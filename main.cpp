#include <iostream>
#include <ctime>
#include "Factura.h"
#include "EnvioNormal.h"
#include "EnvioRapido.h"

int main() {
    std::string nombreProducto, empresaPaqueteria, telefonoPaqueteria, numeroRastreo;
    std::string estado, ciudad, direccion;
    double precioProducto, impuestos;

    // Solicitar datos del producto
    std::cout << "Ingrese el nombre del producto: ";
    std::getline(std::cin, nombreProducto);
    std::cout << "Ingrese el precio del producto: ";
    std::cin >> precioProducto;
    std::cin.ignore(); 

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

    // Preguntar al usuario el tipo de envío
    std::string tipoEnvio;
    std::cout << "¿Qué tipo de envío desea? (Normal / Rapido): ";
    std::cin >> tipoEnvio;

    Envio* envio = nullptr;

    if (tipoEnvio == "Normal") {
        envio = new EnvioNormal(time(0), producto, paqueteria, estado, ciudad, direccion);
    } else if (tipoEnvio == "Rapido") {
        envio = new EnvioRapido(time(0), producto, paqueteria, estado, ciudad, direccion);
    } else {
        std::cout << "Tipo de envío no válido." << std::endl;
        return 1;
    }

    // Solicitar datos de la factura
    std::cout << "Ingrese el monto de impuestos: ";
    std::cin >> impuestos;

    // Calcular el costo total del envío
    double costoTotalEnvio = envio->costoEnvio();

    // Si es envío rápido, agregar cargo adicional
    if (tipoEnvio == "Rapido") {
        costoTotalEnvio += 20.0; // Cargo adicional por envío rápido
    }

    // Crear el objeto Factura
    Factura factura(*envio, impuestos + costoTotalEnvio);

    // Mostrar la información de la factura
    std::cout << factura.getInfo() << std::endl;

    delete envio;
    return 0;
}
