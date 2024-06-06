#ifndef LUGAR_H
#define LUGAR_H

#include <string>

class Lugar {
protected:
    std::string estado;
    std::string ciudad; 
    std::string direccion;

public:
    Lugar(const std::string& estado, const std::string& ciudad, const std::string& direccion)
        : estado(estado), ciudad(ciudad), direccion(direccion) {}

    virtual std::string getInfo() const = 0;
    virtual ~Lugar() = default;
};

#endif // LUGAR_H
