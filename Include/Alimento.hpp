#pragma once

class Alimento
{
private:
    /* data */
    int energia;
public:
    Alimento(int energia) {
        this->energia = energia;
    }
    ~Alimento() {}
    int ExtraerEnergia(){
        return energia;
    }
};