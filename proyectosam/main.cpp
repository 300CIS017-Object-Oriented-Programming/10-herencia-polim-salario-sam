#include <iostream>
#include <vector>
#include "DesarrolladorJunior.h"
#include "DesarrolladorSenior.h"
#include "LiderTecnico.h"
#include "Tester.h"

using namespace std;

void inicializarDatos(vector<Empleado*>& empleados) {
    empleados.push_back(new DesarrolladorJunior("Ana", 2000));
    empleados.push_back(new DesarrolladorJunior("Luis", 2100));
    empleados.push_back(new DesarrolladorSenior("Carlos", 3000));
    empleados.push_back(new DesarrolladorSenior("Marta", 3200));
    empleados.push_back(new LiderTecnico("Jorge", 4000));
    empleados.push_back(new LiderTecnico("Laura", 4200));
    empleados.push_back(new Tester("Pedro", 2500));
    empleados.push_back(new Tester("Sofía", 2600));
}

int main() {
    vector<Empleado*> empleados;
    inicializarDatos(empleados);

    float total = 0;
    cout << "📄 Nómina de empleados:\n";
    for (Empleado* e : empleados) {
        float salario = e->calcularSalario();
        cout << e->getNombre() << " gana $" << salario << endl;
        total += salario;
    }

    cout << "\n💰 Total a pagar: $" << total << endl;

    // Liberar memoria
    for (Empleado* e : empleados) delete e;
    return 0;
}
