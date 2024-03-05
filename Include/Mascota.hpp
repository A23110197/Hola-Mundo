#pragma once
#include <Alimento.hpp>
#include <string>

class Mascota
{
private:
    /* implementacion oculta*/
    int energia;
    std::string nombre;
public:
/* interfaz*/
    Mascota(std::string nombre) {
        this->energia = 0;
        this->nombre = nombre;
    }
    ~Mascota() {}
    void comer(Alimento alimento){
        energia +=
        alimento.ExtraerEnergia();
    }

    int LeerEnergia(){
         return this->energia;
    }
    std::string LeerNombre(){
        return this->nombre;
    }
};