#include "Clientes.h"

Cliente::Cliente() {
    numeroCliente = 0;
    nombre = " ";
    apellido = " ";
    tipo = " ";
    anioCliente = 0;
    estado = " ";
}

void Cliente::setNumCliente(int _numCliente){
    numeroCliente = _numCliente;
};
void Cliente::setNombre(string _nombre){
    nombre = _nombre;
};
void Cliente::setApellido(string _apellido){
    apellido = _apellido;
};
void Cliente::setTipo(string _tipo){
    tipo = _tipo;
};
void Cliente::setAnio(int _anio){
    anio = _anio;
};
void Cliente::setEstado(string _estado){
    estado = _estado;
};

int Cliente::getNumeroCliente(){
    return getNumeroCliente;
};
string Cliente::getNombre(){
    return nombre;
};
string Cliente::getApellido(){
    return apellido;
};
string Cliente::getTipo(){
    return tipo;
};
int Cliente::getAnioCliente(){
    return anioCliente;
};
string Cliente::getEstado(){
    return estado;
};