#include <string>
#include <iostream>

class Cuenta 
{
public:

    Cuenta(std::string nombre_cuenta, int saldo_inicial)
        : nombre{nombre_cuenta} {

        if (saldo_inicial > 0) {
            saldo = saldo_inicial;
        }
    
    }
    void deposito (int deposito_importe) {
        if (deposito_importe > 0) {
            saldo = saldo + deposito_importe;
        }
    }

    int obtener_saldo() const {
        return saldo;
    }

    void poner_nombre(std::string nombre_cuenta) {
        nombre = nombre_cuenta;
    }

    std::string obtener_nombre() const {
        return nombre;
    }

    void retirar (int dinero_quitar) {
        if (dinero_quitar < saldo) {
            saldo = saldo - dinero_quitar;
        }
        else{
            std::cout << "\nSu saldo es insuficiente para hacer un retiro de dinero." << std::endl;
        }
    }
private:
    std::string nombre;
    int saldo{0};
};