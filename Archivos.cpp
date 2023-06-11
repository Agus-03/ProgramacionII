#include "Archivos.h"
#include <iostream>
#include <fstream>
#include <string>

Archivos::Archivos(){
    vector<string> texto;
    string NombreArchivo = "";
    vector<string> linea;
}
string Archivos::getNombreArchivo(){
    return nombreArchivo;
}

vector<string> Archivos::getTexto() {
    return texto;
}

void Archivos::setNombreArchivo(string NombreArchivo) {
    nombreArchivo = NombreArchivo;
}

void Archivos::setlinea(vector<string> Linea) {
    linea = Linea;
}

void Archivos::guardar(string NombreArchivo, vector<Clientes> clientes) {
    ofstream archivoEscritura(NombreArchivo);
    if(archivoEscritura.is_open()){
        for (int i = 0; i < clientes.size(); i++){
            clientes[i].obtenerInfo();
        }
        archivoEscritura.close();
    } else {
        cout << "No se pudo abrir el archivo para escritura." << endl;
    }
}

void Archivos::header(string NombreArchivo){
    ofstream archivoEscritura(NombreArchivo, ofstream::app);
    if(archivoEscritura.is_open()){
        if(NombreArchivo.compare("informeClientes")){
            cout<<"Num; Nombre; Apellido; Tipo; Anio; Estado"<<endl;
        } else if(NombreArchivo.compare("informeTransacciones")){
            cout<<"Num; Cliente; Monto; Tipo; Dia; Mes; Anio"<<endl;
        }
        archivoEscritura.close();
    } else {
        cout << "No se pudo abrir el archivo para escritura." << endl;
    }
}

void Archivos::leerTodo(string nombreArchivo) {
    ifstream archivoLectura(nombreArchivo);
    string linea;
    if (archivoLectura.is_open()) {
        while (getline(archivoLectura, linea)) {
            cout << linea << endl;
        }
        archivoLectura.close();
    } else {
        cout << "No se pudo abrir el archivo para lectura." << endl;
    }
}

void Archivos::modificarLinea(string NombreArchivo, string CodigoCliente, string buscar, string reemplazar) {
    vector<string> texto;
    string linea;
    ifstream archivoLectura(NombreArchivo);
    while(getline(archivoLectura, linea)){
        if(linea.find(CodigoCliente) != string::npos){
            size_t posicion = linea.find(buscar);
            linea.replace(posicion, buscar.length(), reemplazar);
        }
        texto.push_back(linea + "\n");
    }
    archivoLectura.close();

    ofstream archivoEscritura(NombreArchivo);
    if(archivoEscritura.is_open()){
        for (int i = 0; i < texto.size(); i++){
            archivoEscritura << texto[i]<<endl;
        }
        archivoEscritura.close();
    } else {
        cout << "No se pudo abrir el archivo para escritura." << endl;
    }
}

void Archivos::listaFecha(int, int, int) {

}

void Archivos::listaEspecifica(string) {

}