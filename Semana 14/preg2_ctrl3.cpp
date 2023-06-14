/*Defina y coloque un ejemplo de implementación sobre:

- Downcasting: Es el proceso en el cual convierte a un puntero o 
referencia de una clase base a un puntero o referencia de una clase 
derivada.
    

- dynamic_cast: Es un operador que permite convertir punteros o 
referencias de una clase base a puntero o referencia de clase 
derivada.

    BasePlusCommissionEmployee* derivedPtr =
        dynamic_cast<BasePlussCommissionEmployee*>(employeePtr)


- typeid: es un operador que permite obtener informacion sobre el tipo 
de un objeto en tiempo de ejecución.

    for (const Employee* employeePtr : employees) {
        cout << "deleting object of "
             << typeid(*employeePtr).name() << endl;
        delete employeePtr;
    }

-  type_info: Es una clase que representa el tipo de objeto y se utiliza
junto al typeid.


*/