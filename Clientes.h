#include <iostream>
#include <string>
using namespace std;

class Cliente{
private:
    int numeroCliente;
    string nombre;
    string apellido;
    string tipo;
    int anioCliente;
    string estado;

public:
    Cliente();
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
};