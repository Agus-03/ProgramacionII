#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "Clientes.h"

using namespace std;

int main() {
    vector<Cliente> clientes;
    char option, opEstado, opVarias, opTiempo, opTipo;
    int numCliente, anioCliente, auxDia, auxMes, auxAnio, _dia, _mes, _anio, _codigoCliente, _monto;
    string nombre, apellido, tipo, estado;

    do {
        cout << "* * * * M E N U * * * *" << endl;
        cout << "1. Registrar cliente" << endl;
        cout << "2. Modificar el estado del cliente" << endl;
        cout << "3. Generar extraccion" << endl;
        cout << "4. Generar deposito" << endl;
        cout << "5. Consultas varias" << endl;
        cout << "6. Salir" << endl;
        cout << "" << endl;
        cout << "Ingrese una opcion:" << endl;
        cin >> option;

        switch (option) {
            case '1':
                cout << "Ingrese el numero del cliente: ";
                cin >> numCliente;

                cout << "Ingrese el nombre del cliente: ";
                cin >> nombre;

                cout << "Ingrese el apellido del cliente: ";
                cin >> apellido;

                cout << "Ingrese el anio del cliente: ";
                cin >> anioCliente;

                do {
                    cout << "Seleccione el tipo de cliente" << endl;
                    cout << "1. Plata" << endl;
                    cout << "2. Oro" << endl;
                    cout << "3. Black" << endl;
                    cout << "4. Salir" << endl;
                    cout << "" << endl;
                    cin >> opTipo;

                    switch (opTipo) {
                        case '1':
                            clientes.push_back(Cliente(numCliente, nombre, apellido, "Plata", anioCliente, "ALTA"));
                            break;

                        case '2':
                            clientes.push_back(Cliente(numCliente, nombre, apellido, "Oro", anioCliente, "ALTA"));
                            break;

                        case '3':
                            if (2023-anioCliente < 3){
                                cout<<"No cumple con la antiguedad necesaria"<<endl;
                            } else {
                                clientes.push_back(Cliente(numCliente, nombre, apellido, "Black", anioCliente, "ALTA"));
                            }
                            break;

                        case '4':
                            break;

                        default:
                            cout << "boludo" << endl;
                    } break;
                } while (opTipo != '4');

                break;
        }
    } while (option != '6');

    for(int i=0; i<clientes.size(); i++){
        cout << clientes[i].getNombre() << endl;
        cout << clientes[i].getApellido() << endl;
        cout << clientes[i].getNumeroCliente() << endl;
        cout << clientes[i].getTipo() << endl;
        cout << clientes[i].getAnioCliente() << endl;
        cout << clientes[i].getEstado() << endl;
        cout << clientes[i].tarjetas.getTipoT() << endl;
    }

    return 0;
}
