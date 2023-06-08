#include <iostream>
#include <string>
#include "Tarjetas.h"
#include "Transacciones.h"
using namespace std;

class Cliente{
private:
    Tarjeta tarjeta;
    Transacciones transacciones;
    int numeroCliente;
    string nombre;
    string apellido;
    string tipo;
    int anioCliente;
    string estado;

public:
    Cliente();
    Cliente(int, string, string, string, int, string);
    void setNumCliente(int);
    void setNombre(string);
    void setApellido(string);
    void setTipo(string);
    void setAnio(int);
    void setEstado(string);

    int getNumeroCliente();
    string getNombre();
    string getApellido();
    string getTipo();
    int getAnioCliente();
    string getEstado();

    void realizarExtraccion(int, int, int, int);
    void realizarDeposito(int, int, int, int);
};