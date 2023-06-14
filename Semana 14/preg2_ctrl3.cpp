/*Defina y coloque un ejemplo de implementación sobre:

- Downcasting: Es el proceso en el cual convierte a un puntero o 
referencia de una clase base a un puntero o referencia de una clase 
derivada.

Figura* figura = new Rectangulo();

Rectangulo* rectangulo = dynamic_cast<Rectangulo*>(figura);

- dynamic_cast: Es un operador que permite convertir punteros o 
referencias de una clase base a puntero o referencia de clase 
derivada.

BasePlusCommissionEmployee* derivedPtr = dynamic_cast<BasePlussCommissionEmployee*>(employeePtr)

- typeid: es un operador que permite obtener informacion sobre el tipo 
de un objeto en tiempo de ejecución.

    for (const Employee* employeePtr : employees) {
        cout << "deleting object of "
             << typeid(*employeePtr).name() << endl;
        delete employeePtr;
    }


    #include <iostream>
    #include <typeinfo>

    int main() {
        int myInt = 42;
        const std::type_info& type = typeid(myInt);
        std::cout << "Tipo: " << type.name() << std::endl;
    }

-  type_info: Es una clase definida en la biblioteca de C++,
   que proporciona información sobre el tipo de un objeto en tiempo de ejecución;
   y se utiliza junto al typeid.


*/