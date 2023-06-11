#ifndef PROGRAMACIONII_TARJETAS_H
#define PROGRAMACIONII_TARJETAS_H

#include <iostream>
#include <string>
using namespace std;

class Tarjetas{
private:
    int limite;
    string tipo_t;

public:
    Tarjetas();

    void tarjeta_oro();
    void tarjeta_black();

    void setLimite(int);
    void setTipoT(string);

    int getLimite();
    string getTipoT();
};

#endif //PROGRAMACIONII_TARJETAS_H
