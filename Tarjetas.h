#ifndef PROGRAMACIONII_TARJETAS_H
#define PROGRAMACIONII_TARJETAS_H

#include <iostream>
#include <string>
using namespace std;

class Tarjeta{
private:
    int limite;
    string tipo_t;

public:
    Tarjeta();

    void tarjeta_oro();
    void tarjeta_black();
};

#endif //PROGRAMACIONII_TARJETAS_H
