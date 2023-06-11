#ifndef PROGRAMACIONII_ARCHIVOS_H
#define PROGRAMACIONII_ARCHIVOS_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Clientes.h"
using namespace std;

class Archivos{
private:
    vector<Clientes> cliente;
    string nombreArchivo;
    vector<string> linea;
    vector<string> texto;
public:
    Archivos();
    Clientes clientes();

    string getNombreArchivo();
    vector<string> getTexto();

    void setNombreArchivo(string);
    void setlinea(vector<string>);

    void guardar(string, vector<Clientes>);
    void leerTodo(string);
    void modificarLinea(string, string, string, string);
    void listaFecha(int,int,int);
    void listaEspecifica(string);
    void header(string);
};

#endif //PROGRAMACIONII_ARCHIVOS_H
