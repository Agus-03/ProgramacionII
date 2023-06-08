#include <iostream>
#include <string>
#include <vector>
#include "Tarjetas.h"
#include "Transacciones.h"
using namespace std;

class Cliente{
private:
    Transacciones transacciones;
    string numeroCliente;
    string nombre;
    string apellido;
    string tipo;
    int anioCliente;
    string estado;

public:
    Tarjetas tarjetas;
    Cliente(string, string, string, string, int, string);
    void setNumCliente(string);
    void setNombre(string);
    void setApellido(string);
    void setTipo(string);
    void setAnio(int);
    void setEstado(string);

    string getNumeroCliente();
    string getNombre();
    string getApellido();
    string getTipo();
    int getAnioCliente();
    string getEstado();

    void realizarExtraccion(int, int, int, int);
    void realizarDeposito(int, int, int, int);

};