#ifndef PROGRAMACIONII_TRANSACCIONES_H
#define PROGRAMACIONII_TRANSACCIONES_H

#include <iostream>
using namespace std;

class Transacciones{
private:
    int numTrans;
    int monto;
    int dia;
    int mes;
    int anioTrans;
    char tipoTrans;

public:
    Transacciones();
    Transacciones(int, int, int, int, int, char);

    void extraccion (int, int, int, int);
    void deposito (int, int, int, int);

    void setNumTrans(int);
    void setMonto(int);
    void setDia(int);
    void setMes(int);
    void setAnioTrans(int);
    void setTipoTrans(char);

    int getNumTrans();
    int getMonto();
    int getDia();
    int getMes();
    int getAnioTrans();
    int getTipoTrans();
};

#endif //PROGRAMACIONII_TRANSACCIONES_H