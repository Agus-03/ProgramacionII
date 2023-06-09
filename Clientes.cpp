#include "Clientes.h"
#include "Transacciones.h"
#include <vector>
#include <iostream>
using namespace std;

Clientes::Clientes(){
    numeroCliente = "";
    nombre = "";
    apellido = "";
    tipo = "";
    anioCliente = 0;
    estado = "";
}

Clientes::Clientes(string _numeroCliente, string _nombre, string _apellido, string _tipo, int _anioCliente, string _estado) {
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


void Clientes::setNumCliente(string _numCliente){
    numeroCliente = _numCliente;
}
void Clientes::setNombre(string _nombre){
    nombre = _nombre;
}
void Clientes::setApellido(string _apellido){
    apellido = _apellido;
}
void Clientes::setTipo(string _tipo){
    tipo = _tipo;
}
void Clientes::setAnio(int _anio){
    anioCliente = _anio;
}
void Clientes::setEstado(string _estado){
    estado = _estado;
}

string Clientes::getNumeroCliente(){
    return numeroCliente;
}
string Clientes::getNombre(){
    return nombre;
}
string Clientes::getApellido(){
    return apellido;
}
string Clientes::getTipo(){
    return tipo;
}
int Clientes::getAnioCliente(){
    return anioCliente;
}
string Clientes::getEstado(){
    return estado;
}

void Clientes::realizarDeposito(int monto, int dia, int mes, int anio) {
    transacciones.deposito(monto, dia, mes, anio);
}

void Clientes::realizarExtraccion(int monto, int dia, int mes, int anio) {
    transacciones.extraccion(monto, dia, mes, anio);
}

string Clientes::obtenerInfo() {
    return numeroCliente + "; " + nombre + "; " + apellido +"; " + "; " + tipo + "; " + to_string(anioCliente) + "; " + estado;
}



