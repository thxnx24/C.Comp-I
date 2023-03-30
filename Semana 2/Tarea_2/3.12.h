#include <iostream>

class Fecha
{
public: 
    Fecha(int d, int m, int a){
        mes = (m >= 1 && m <= 12) ? m : 1;
        dia = d;
        año = a;};    
    void set_mes(int m)
    {
        mes = (m >= 1 && m <= 12) ? m : 1;
    }
    int get_mes()
    {
        return mes;
    }

    void set_dia(int d)
    {
        dia = d;
    }
    int get_dia()
    {
        return dia;
    }

    void set_año(int a)
    {
        año = a;
    }
    int get_año()
    {
        return año;
    }

    void mostrar_fecha()
    {
        std::cout << dia << "/"<< mes << "/" << año ;
    }
private:
    int dia;
    int mes;
    int año;
};