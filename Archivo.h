#include <fstream>

class Archivo{
private:
    string texto[];
    string nombreArchivo;
    string linea;
public:
    Archivo();
    string getNombreArchivo();
    string getTexto();
    void setNombreArchivo(string);
    void setlinea(string);
    void guardar(string, string);
    void leerTodo(string);
    void modificarLinea(string, string, string, string);
    void listaFecha(int,int,int);
    void listaEspecifiva(string);
};
