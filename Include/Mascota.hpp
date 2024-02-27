#include<Alimento.hpp>

class Mascota
{
private:
    /* implementacion oculta*/
    int Energia;
    int Felicidad;
public:
/* interfaz*/
    Mascota() {
        this->Energia=0
        this->Felicidad=0
    }
    ~Mascota() {}
    void comer(){
        Energia +=1;
    }
    void jugar(){
        Felicidad -=1;
    }
    void LeerEnergia(){
         cout<<'Energia'<<endl;
    }
};