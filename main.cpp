#include <iostream>
#include <vector>
#include <ctime>
#include "Factura.h"
#include "EnvioNormal.h"
#include "EnvioRapido.h"

int main() {
    std::string nombreProducto, empresaPaqueteria, telefonoPaqueteria, numeroRastreo;
    std::string estado, ciudad, direccion;
    double precioProducto;
    char tipoEnvio;

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

    // Solicitar el tipo de envío al usuario
    std::cout << "¿Qué tipo de envío desea? (N: Normal / R: Rapido): ";
    std::cin >> tipoEnvio;
    std::cin.ignore();

    // Crear objeto de tipo Envio según la elección del usuario
    Envio* envio = nullptr;
    if (tipoEnvio == 'N' || tipoEnvio == 'n') {
        envio = new EnvioNormal(time(0), Producto(nombreProducto, precioProducto), Paqueteria(empresaPaqueteria, telefonoPaqueteria, numeroRastreo), estado, ciudad, direccion);
    } else if (tipoEnvio == 'R' || tipoEnvio == 'r') {
        envio = new EnvioRapido(time(0), Producto(nombreProducto, precioProducto), Paqueteria(empresaPaqueteria, telefonoPaqueteria, numeroRastreo), estado, ciudad, direccion);
    } else {
        std::cout << "Opción de envío no válida." << std::endl;
        return 1; 
    }

    // Crear el objeto Factura
    Factura factura(envio);

    // Mostrar la factura
    std::cout << factura.getInfo() << std::endl;

    // Liberar la memoria del objeto de envío
    delete envio;

    return 0;
}

