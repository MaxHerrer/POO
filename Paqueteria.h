#ifndef PAQUETERIA_H
#define PAQUETERIA_H

#include <string>

class Paqueteria {
private:
    std::string empresa;
    std::string telefono;
    std::string numeroRastreo;

public:
    Paqueteria(const std::string& empresa, const std::string& telefono, const std::string& numeroRastreo)
        : empresa(empresa), telefono(telefono), numeroRastreo(numeroRastreo) {}

    std::string getEmpresa() const { return empresa; }
    std::string getTelefono() const { return telefono; }
    std::string getNumeroRastreo() const { return numeroRastreo; }
};

#endif // PAQUETERIA_H
