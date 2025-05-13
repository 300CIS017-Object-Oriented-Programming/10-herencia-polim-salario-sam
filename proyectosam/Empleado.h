#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using namespace std;

class Empleado {
protected:
    string nombre;
    float salarioBase;

public:
    Empleado(string nombre, float salarioBase);
    virtual float calcularSalario() const; // Método polimórfico
    string getNombre() const;
    virtual ~Empleado() = default;
};

#endif
