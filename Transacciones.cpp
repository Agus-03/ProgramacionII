#include <iostream>
#include <random>
#include <ctime>
#include "Transacciones.h"
using namespace std;

Transacciones::Transacciones() {
    numTrans = 0;
    monto = 0;
    dia = 0;
    mes = 0;
    anioTrans = 0;
    tipoTrans = '\0';
}

Transacciones::Transacciones(int _numTrans, int _monto, int _dia, int _mes, int _anioTrans, char _tipoTrans) {
    numTrans = _numTrans;
    monto = _monto;
    dia = _dia;
    mes = _mes;
    anioTrans = _anioTrans;
    tipoTrans = _anioTrans;
}

void Transacciones::deposito(int _monto, int _dia, int _mes, int _anioTrans) {
    monto = _monto;
    dia = _dia;
    mes = _mes;
    anioTrans = _anioTrans;
    tipoTrans = 'D';
    srand(static_cast<unsigned>(std::time(nullptr)));
    numTrans = rand() % 900 + 100;
}

void Transacciones::extraccion(int _monto, int _dia, int _mes, int _anioTrans) {
    monto = _monto;
    dia = _dia;
    mes = _mes;
    anioTrans = _anioTrans;
    tipoTrans = 'E';
    srand(static_cast<unsigned>(std::time(nullptr)));
    numTrans = rand() % 900 + 100;
}

void Transacciones::setNumTrans(int _numTrans) {
    numTrans = _numTrans;
}
void Transacciones::setMonto(int _monto) {
    monto = _monto;
}
void Transacciones::setDia(int _dia) {
    dia = _dia;
}
void Transacciones::setMes(int _mes) {
    mes = _mes;
}
void Transacciones::setAnioTrans(int _anioTrans) {
    anioTrans = _anioTrans;
}
void Transacciones::setTipoTrans(char _tipoTrans) {
    tipoTrans = _tipoTrans;
}

int Transacciones::getNumTrans() {
    return numTrans;
}
int Transacciones::getMonto() {
    return monto;
}
int Transacciones::getDia() {
    return dia;
}
int Transacciones::getMes() {
    return mes;
}
int Transacciones::getAnioTrans() {
    return anioTrans;
}
char Transacciones::getTipoTrans() {
    return tipoTrans;
}