#include "Clientes.h"
#include "Transacciones.h"
#include <vector>
#include <iostream>
using namespace std;

Cliente::Cliente(int _numeroCliente, string _nombre, string _apellido, string _tipo, int _anioCliente, string _estado) {
    numeroCliente = _numeroCliente;
    nombre = _nombre;
    apellido = _apellido;
    tipo = _tipo;
    anioCliente = _anioCliente;
    estado = _estado;

    if (_tipo == "Oro") {
        tarjetas.tarjeta_oro();
    }

    if (_tipo == "Black") {
        tarjetas.tarjeta_black();
    }



}


void Cliente::setNumCliente(int _numCliente){
    numeroCliente = _numCliente;
}
void Cliente::setNombre(string _nombre){
    nombre = _nombre;
}
void Cliente::setApellido(string _apellido){
    apellido = _apellido;
}
void Cliente::setTipo(string _tipo){
    tipo = _tipo;
}
void Cliente::setAnio(int _anio){
    anioCliente = _anio;
}
void Cliente::setEstado(string _estado){
    estado = _estado;
}

int Cliente::getNumeroCliente(){
    return numeroCliente;
}
string Cliente::getNombre(){
    return nombre;
}
string Cliente::getApellido(){
    return apellido;
}
string Cliente::getTipo(){
    return tipo;
}
int Cliente::getAnioCliente(){
    return anioCliente;
}
string Cliente::getEstado(){
    return estado;
}

void Cliente::realizarDeposito(int monto, int dia, int mes, int anio) {
    transacciones.deposito(monto, dia, mes, anio);
}

void Cliente::realizarExtraccion(int monto, int dia, int mes, int anio) {
    transacciones.extraccion(monto, dia, mes, anio);
}




