#include <iostream>
#include <string>

class Motor_vehiculo {
public:
    Motor_vehiculo(std::string _marca, std::string _tipo_combustible, int _año_fabricacion, std::string _color, int _cilindrada) 
        :marca(_marca), tipo_combustible(_tipo_combustible),año_fabricacion(_año_fabricacion),color(_color),cilindrada(_cilindrada) {}

    void set_marca(std::string _marca)
    {
        marca = _marca;
    }
    std::string get_marca()
    {
        return marca;
    }

    void set_tipo_combustible(std::string _tipo_combustible)
    {
        tipo_combustible = _tipo_combustible;
    }
    std::string get_tipo_combustible() 
    {
        return tipo_combustible;
    }

    void set_año_fabricacion(int _año_fabricacion)
    {
        año_fabricacion = _año_fabricacion;
    }
    int get_año_fabricacion()
    {
        return año_fabricacion;
    }

    void set_color(std::string _color)
    {
        color = _color;
    }
    std::string get_color()
    {
        return color;
    }

    void set_cilindrada(int _cilindrada)
    {
        cilindrada = _cilindrada;
    }
    int get_cilindrada() 
    {
        return cilindrada;
    }

    void detalles_coche() 
    {
        std::cout << "\nDETALLES DEL COCHE:\n";
        std::cout << "Marca: " << marca << std::endl;
        std::cout << "Tipo de combustible: " << tipo_combustible << std::endl;
        std::cout << "Año de fabricación: " << año_fabricacion << std::endl;
        std::cout << "Color: " << color << std::endl;
        std::cout << "Cilindrada: " << cilindrada << std::endl;
    }
private:
    std::string marca;
    std::string tipo_combustible;
    int año_fabricacion;
    std::string color;
    int cilindrada;
};