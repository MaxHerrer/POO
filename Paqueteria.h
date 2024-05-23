#ifndef PAQUETERIA_H
#define PAQUETERIA_H

#include <string>

class Paqueteria {
private:
    std::string empresa; // Nombre de la empresa de paquetería
    std::string telefono; // Número de teléfono de la empresa de paquetería
    std::string numeroRastreo; // Número de rastreo del paquete

public:
    // Métodos getter y setter para el nombre de la empresa
    std::string getEmpresa() const;
    void setEmpresa(const std::string& empresa);

    // Métodos getter y setter para el número de teléfono
    std::string getTelefono() const;
    void setTelefono(const std::string& telefono);

    // Métodos getter y setter para el número de rastreo
    std::string getNumeroRastreo() const;
    void setNumeroRastreo(const std::string& numeroRastreo);
};

#endif // PAQUETERIA_H
