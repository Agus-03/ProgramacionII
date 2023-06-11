#include <iostream>
#include <string>
#include "Tarjetas.h"
using namespace std;

Tarjetas::Tarjetas(){
    limite = 0;
    tipo_t = "";
}

void Tarjetas::tarjeta_oro() {
    limite = 50000;
    tipo_t = "Oro";
}

void Tarjetas::tarjeta_black() {
    limite = 250000;
    tipo_t = "Black";
}

void Tarjetas::setLimite(int _limite) {
    limite = _limite;
}
void Tarjetas::setTipoT(string _tipo_t) {
    tipo_t = _tipo_t;
}

int Tarjetas::getLimite() {
    return limite;
}
string Tarjetas::getTipoT() {
    return tipo_t;
}