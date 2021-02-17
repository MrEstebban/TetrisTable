#include <string>

using namespace std;

struct Pieza{
    int tamano;
    string color;
    int* coordenada;
    int rotacion;
    char** figura;
    int inversion;
    int filas;
    int columnas;
};

void crearPieza (Pieza& pieza, int tipoPieza);
void restablecerPieza(Pieza& pieza);
void inicializarCoordenadaPieza(Pieza& pieza, int x , int y);
void borrarCoordenada(Pieza& pieza);
void rotarPieza (Pieza& pieza, int rotacion);
void invertirPiezaHorizontalmente (Pieza& pieza,int tipoPieza);
void invertirPiezaVerticalmente (Pieza& pieza, int tipoPieza);
