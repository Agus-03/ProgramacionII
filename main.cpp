#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "Clientes.h"

using namespace  std;

int main(){
    vector<Cliente> clientes;
    char option, opEstado, opVarias, opTiempo, opTipo;
    int numCliente, anioCliente, auxDia, auxMes, auxAnio, _dia, _mes, _anio, _codCliente, _monto;
    string nombre, apellido, tipo, estado;
    
    do{
        cout<<"* * * * M E N U * * * *"<<endl;
        cout<<"1. Registrar cliente"<<endl;
        cout<<"2. Modificar el estado del cliente"<<endl;
        cout<<"3. Generar extraccion"<<endl;
        cout<<"4. Generar deposito"<<endl;
        cout<<"5. Consultas varias"<<endl;
        cout<<"6. Salir"<<endl;
        cout<<""<<endl;
        cout<<"Ingrese una opcion:"<<endl;
        cin>>option;
        switch (option) {

        }
    } while (option !='6');
    
    cout<<"Hola Niquito"<<endl;
}