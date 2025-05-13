#include "DesarrolladorJunior.h"

DesarrolladorJunior::DesarrolladorJunior(string nombre, float salarioBase) : Empleado(nombre, salarioBase) {}

float DesarrolladorJunior::calcularSalario() const {
    return salarioBase;
}
