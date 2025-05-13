// .cpp
#include "DesarrolladorSenior.h"

DesarrolladorSenior::DesarrolladorSenior(string nombre, float salarioBase) : Empleado(nombre, salarioBase) {}

float DesarrolladorSenior::calcularSalario() const {
    return salarioBase * 1.20;
}
