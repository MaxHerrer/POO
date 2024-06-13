#include <iostream>
#include "Carrito.h"

int main() {
    Carrito carrito;
    int opcion = 0;
    bool correr = true;

    while (correr) {
        opcion = carrito.mostrarMenu();
        if (opcion == 1) {
            carrito.mostrarCarrito();
        } else if (opcion == 2) {
            carrito.mostrarDireccion();
        } else if (opcion == 3) {
            carrito.mostrarPaqueterias();
        } else if (opcion == 4) {
            carrito.agregarProducto();
        } else if (opcion == 5) {
            carrito.agregarPaqueteria();
        } else if (opcion == 6) {
            carrito.agregarDireccion();
        } else if (opcion == 7) {
            carrito.seleccionarTipoEnvio();
        } else if (opcion == 8) {
            carrito.confirmarCompra();
        } else if (opcion == 9) {
            correr = false;
            std::cout << "Saliendo...\n";
        } else {
            std::cout << "Opción inválida. Por favor, intente de nuevo.\n";
        }
    }

    return 0;
}
