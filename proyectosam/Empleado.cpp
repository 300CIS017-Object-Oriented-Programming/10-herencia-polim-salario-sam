#include "Empleado.h"

Empleado::Empleado(string nombre, float salarioBase) : nombre(nombre), salarioBase(salarioBase) {}

float Empleado::calcularSalario() const {
    return salarioBase;
}

string Empleado::getNombre() const {
    return nombre;
}
