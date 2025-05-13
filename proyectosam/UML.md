Diagrama UML

```mermaid
classDiagram
    class Empleado {
        -string nombre
        -float salarioBase
        +Empleado(string, float)
        +calcularSalario() float
        +getNombre() string
    }

    class DesarrolladorJunior {
        +calcularSalario() float
    }

    class DesarrolladorSenior {
        +calcularSalario() float
    }

    class LiderTecnico {
        +calcularSalario() float
    }

    class Tester {
        +calcularSalario() float
    }

    Empleado <|-- DesarrolladorJunior
    Empleado <|-- DesarrolladorSenior
    Empleado <|-- LiderTecnico
    Empleado <|-- Tester
