#pragma once
#include<Alimento.hpp>

class Mascota
{
private:
    /* implementacion oculta*/
    int vida;
public:
/* interfaz*/
    Mascota() {
        this->vida = 0;
    }
    ~Mascota() {}
    void comer(Alimento alimento){
        vida +=
        alimento.ExtraerEnergia();
    }
    void jugar(){
        Felicidad -=1;
    }
    void LeerEnergia(){
         cout<<'Energia'<<endl;
    }
};