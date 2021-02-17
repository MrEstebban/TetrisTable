#include "Pieza.h"
#include <iostream>

void crearPieza(Pieza& pieza, int tipoPieza){

    pieza.rotacion = 0;
    pieza.inversion = 0;

    switch (tipoPieza){

        //figura de 1 cuadrado roja
        case 1:

            pieza.color = "Rojo";
            pieza.tamano = 1;
            pieza.filas = 1;
            pieza.columnas = 1;

            //inicializar figura

            //filas
            pieza.figura = new char*[pieza.filas];
            //columnas
            for (int i = 0; i < pieza.filas; i++){
                *(pieza.figura+i) = new char[pieza.columnas];
            }
            (*(*(pieza.figura+0)+0)) = '0';

            break;

        //figura de 2 cuadrados roja
        case 2:

            pieza.color = "Rojo";
            pieza.tamano = 2;
            pieza.filas = 1;
            pieza.columnas = 2;

            //inicializar figura

            //filas
            pieza.figura = new char*[pieza.filas];
            //columnas
            for (int i = 0; i < pieza.filas; i++){
                *(pieza.figura+i) = new char[pieza.columnas];
            }
            (*(*(pieza.figura+0)+0)) = '0';
            (*(*(pieza.figura+0)+1)) = '0';

            break;

        //figura de 3 cuadrados plana azul
        case 3:

            pieza.color = "Azul";
            pieza.tamano = 3;
            pieza.filas = 1;
            pieza.columnas = 3;

            //inicializar figura

            //filas
            pieza.figura = new char*[pieza.filas];
            //columnas
            for (int i = 0; i < pieza.filas; i++){
                *(pieza.figura+i) = new char[pieza.columnas];
            }
            (*(*(pieza.figura+0)+0)) = '0';
            (*(*(pieza.figura+0)+1)) = '0';
            (*(*(pieza.figura+0)+2)) = '0';

            break;

        //figura de 3 cuadrados en forma de frisby verde
        case 4:

            pieza.color = "Verde";
            pieza.tamano = 3;
            pieza.filas = 2;
            pieza.columnas = 2;

            //inicializar figura

            //filas
            pieza.figura = new char*[pieza.filas];
            //columnas
            for (int i = 0; i < pieza.filas; i++){
                *(pieza.figura+i) = new char[pieza.columnas];
            }

            (*(*(pieza.figura+0)+0)) = ' ';
            (*(*(pieza.figura+0)+1)) = '0';
            (*(*(pieza.figura+1)+0)) = '0';
            (*(*(pieza.figura+1)+1)) = '0';

            break;

        //figura de 4 cuadrados en forma de L roja
        case 5:

            pieza.color = "Rojo";
            pieza.tamano = 4;
            pieza.filas = 2;
            pieza.columnas = 3;

            //inicializar figura

            //filas
            pieza.figura = new char*[pieza.filas];
            //columnas
            for (int i = 0; i < pieza.filas; i++){
                *(pieza.figura+i) = new char[pieza.columnas];
            }

            (*(*(pieza.figura+0)+0)) = '0';
            (*(*(pieza.figura+0)+1)) = ' ';
            (*(*(pieza.figura+0)+2)) = ' ';
            (*(*(pieza.figura+1)+0)) = '0';
            (*(*(pieza.figura+1)+1)) = '0';
            (*(*(pieza.figura+1)+2)) = '0';

            break;

        //figura de 4 cuadrados verde
        case 6:

            pieza.color = "Verde";
            pieza.tamano = 4;
            pieza.filas = 2;
            pieza.columnas = 3;

            //inicializar figura

            //filas
            pieza.figura = new char*[pieza.filas];
            //columnas
            for (int i = 0; i < pieza.filas; i++){
                *(pieza.figura+i) = new char[pieza.columnas];
            }

            (*(*(pieza.figura+0)+0)) = '0';
            (*(*(pieza.figura+0)+1)) = '0';
            (*(*(pieza.figura+0)+2)) = '0';
            (*(*(pieza.figura+1)+0)) = ' ';
            (*(*(pieza.figura+1)+1)) = '0';
            (*(*(pieza.figura+1)+2)) = ' ';

            break;

        //figura de 4 cuadrados azul
        case 7:

            pieza.color = "Azul";
            pieza.tamano = 4;
            pieza.filas = 3;
            pieza.columnas = 2;

            //inicializar figura

            //filas
            pieza.figura = new char*[pieza.filas];
            //columnas
            for (int i = 0; i < pieza.filas; i++){
                *(pieza.figura+i) = new char[pieza.columnas];
            }

            (*(*(pieza.figura+0)+0)) = '0';
            (*(*(pieza.figura+0)+1)) = ' ';
            (*(*(pieza.figura+1)+0)) = '0';
            (*(*(pieza.figura+1)+1)) = '0';
            (*(*(pieza.figura+2)+0)) = ' ';
            (*(*(pieza.figura+2)+1)) = '0';

            break;

        //figura de 5 cuadrados roja
        case 8:

            pieza.color = "Rojo";
            pieza.tamano = 5;
            pieza.filas = 3;
            pieza.columnas = 3;

            //inicializar figura

            //filas
            pieza.figura = new char*[pieza.filas];
            //columnas
            for (int i = 0; i < pieza.filas; i++){
                *(pieza.figura+i) = new char[pieza.columnas];
            }

            (*(*(pieza.figura+0)+0)) = ' ';
            (*(*(pieza.figura+0)+1)) = '0';
            (*(*(pieza.figura+0)+2)) = ' ';
            (*(*(pieza.figura+1)+0)) = ' ';
            (*(*(pieza.figura+1)+1)) = '0';
            (*(*(pieza.figura+1)+2)) = ' ';
            (*(*(pieza.figura+2)+0)) = '0';
            (*(*(pieza.figura+2)+1)) = '0';
            (*(*(pieza.figura+2)+2)) = '0';

            break;

        //figura de 5 cuadrados en forma de serpiente verde
        case 9:

            pieza.color = "Verde";
            pieza.tamano = 5;
            pieza.filas = 3;
            pieza.columnas = 3;

            //inicializar figura

            //filas
            pieza.figura = new char*[pieza.filas];
            //columnas
            for (int i = 0; i < pieza.filas; i++){
                *(pieza.figura+i) = new char[pieza.columnas];
            }

            (*(*(pieza.figura+0)+0)) = '0';
            (*(*(pieza.figura+0)+1)) = '0';
            (*(*(pieza.figura+0)+2)) = ' ';
            (*(*(pieza.figura+1)+0)) = ' ';
            (*(*(pieza.figura+1)+1)) = '0';
            (*(*(pieza.figura+1)+2)) = ' ';
            (*(*(pieza.figura+2)+0)) = ' ';
            (*(*(pieza.figura+2)+1)) = '0';
            (*(*(pieza.figura+2)+2)) = '0';

            break;

        //figura de 5 cuadrados en forma de C azul
        case 10:

            pieza.color = "Azul";
            pieza.tamano = 5;
            pieza.filas = 2;
            pieza.columnas = 3;

            //inicializar figura

            //filas
            pieza.figura = new char*[pieza.filas];
            //columnas
            for (int i = 0; i < pieza.filas; i++){
                *(pieza.figura+i) = new char[pieza.columnas];
            }

            (*(*(pieza.figura+0)+0)) = '0';
            (*(*(pieza.figura+0)+1)) = ' ';
            (*(*(pieza.figura+0)+2)) = '0';
            (*(*(pieza.figura+1)+0)) = '0';
            (*(*(pieza.figura+1)+1)) = '0';
            (*(*(pieza.figura+1)+2)) = '0';

            break;

    }
}

void restablecerPieza(Pieza& pieza){

    for (int j = 0; j < pieza.filas; j++){
        delete[] *(pieza.figura+j);
    }
    delete[] pieza.figura;
    pieza.figura = NULL;

    pieza.rotacion = 0;
    pieza.inversion = 0;
}

void inicializarCoordenadaPieza(Pieza& pieza, int x , int y){
    pieza.coordenada = new int[2];
    *(pieza.coordenada+0) = y;
    *(pieza.coordenada+1) = x;
}

void borrarCoordenada(Pieza& pieza){
    delete[] pieza.coordenada;
    pieza.coordenada = NULL;
}

//rotación de grados hacia la derecha
void rotarPieza (Pieza& pieza, int rotacion){

    int n;
    int m;

    pieza.rotacion = rotacion;

    int ciclos = 0;

    switch (rotacion){
        case 90:
            ciclos = 1;
        break;
        case 180:
            ciclos = 2;
        break;
        case 270:
            ciclos = 3;
        break;
    }

    char** figura_rotada = NULL;

    //dependiendo de veces que se va a rotar 90 grados
    for(int c=0; c<ciclos; c++){

        n = pieza.filas;
        m = pieza.columnas;

        //declaración de filas (intercambiadas por columnas)
        figura_rotada = new char*[m];

        //declaración de columnas (intercambiadas por filas)
        for (int i = 0; i < m; i++){
            *(figura_rotada+i) = new char[n];
        }

        //asignación valores figura rotada
        int contador;
        for (int i = 0; i<m; i++){
            contador = n-1;
            for (int j = 0; j<n; j++){
                (*(*(figura_rotada+i)+j))=(*(*(pieza.figura+contador)+i));
                contador--;
            }
        }

        //liberar memoria dinámica para la anterior figura (sin rotar)

        for (int j = 0; j < n; j++){
            delete[] *(pieza.figura+j);
        }

        delete[] pieza.figura;

        //asignarle a la pieza la figura rotada
        pieza.figura = figura_rotada;

        //cambiar filas y columnas
        pieza.filas = m;
        pieza.columnas = n;

        figura_rotada = NULL;

    }

}

void invertirPiezaHorizontalmente (Pieza& pieza,int tipoPieza){

    switch (tipoPieza){

    //figura de 1 cuadrado roja
    case 1:
        pieza.inversion = 1; // 1 para las piezas invertidas horizontalmente
        break;

    //figura de 2 cuadrados roja
    case 2:
        pieza.inversion = 1; // 1 para las piezas invertidas horizontalmente
        break;

    //figura de 3 cuadrados plana azul
    case 3:
        pieza.inversion = 1; // 1 para las piezas invertidas horizontalmente
        break;

    //figura de 3 cuadrados en forma de frisby verde
    case 4:

        pieza.inversion = 1; // 1 para las piezas invertidas horizontalmente

        (*(*(pieza.figura+0)+0)) = '0';
        (*(*(pieza.figura+1)+0)) = '0';
        (*(*(pieza.figura+1)+1)) = '0';
        (*(*(pieza.figura+0)+1)) = ' ';
        break;

    //figura de 4 cuadrados en forma de L roja
    case 5:
        pieza.inversion = 1; // 1 para las piezas invertidas horizontalmente

        (*(*(pieza.figura+0)+0)) = ' ';
        (*(*(pieza.figura+0)+1)) = ' ';
        (*(*(pieza.figura+0)+2)) = '0';
        (*(*(pieza.figura+1)+0)) = '0';
        (*(*(pieza.figura+1)+1)) = '0';
        (*(*(pieza.figura+1)+2)) = '0';
        break;

    //figura de 4 cuadrados verde
    case 6:
        pieza.inversion = 1; // 1 para las piezas invertidas horizontalmente
        break;

    //figura de 4 cuadrados azul
    case 7:
        pieza.inversion = 1; // 1 para las piezas invertidas horizontalmente

        (*(*(pieza.figura+0)+0)) = ' ';
        (*(*(pieza.figura+0)+1)) = '0';
        (*(*(pieza.figura+1)+0)) = '0';
        (*(*(pieza.figura+1)+1)) = '0';
        (*(*(pieza.figura+2)+0)) = '0';
        (*(*(pieza.figura+2)+1)) = ' ';

        break;

    //figura de 5 cuadrados roja
    case 8:
        pieza.inversion = 1; // 1 para las piezas invertidas horizontalmente
        break;

    //figura de 5 cuadrados en forma de serpiente verde
    case 9:

        pieza.inversion = 1; // 1 para las piezas invertidas horizontalmente

        (*(*(pieza.figura+0)+0)) = ' ';
        (*(*(pieza.figura+0)+1)) = '0';
        (*(*(pieza.figura+0)+2)) = '0';
        (*(*(pieza.figura+1)+0)) = ' ';
        (*(*(pieza.figura+1)+1)) = '0';
        (*(*(pieza.figura+1)+2)) = ' ';
        (*(*(pieza.figura+2)+0)) = '0';
        (*(*(pieza.figura+2)+1)) = '0';
        (*(*(pieza.figura+2)+2)) = ' ';

        break;

    //figura de 5 cuadrados en forma de C azul
    case 10:
        pieza.inversion = 1; // 1 para las piezas invertidas horizontalmente

        break;

    }
}

void invertirPiezaVerticalmente (Pieza& pieza, int tipoPieza){

    switch (tipoPieza){

    //figura de 1 cuadrado roja
    case 1:
        pieza.inversion = 2; // 2 para las piezas invertidas verticalmente
        break;

    //figura de 2 cuadrados roja
    case 2:
        pieza.inversion = 2; // 2 para las piezas invertidas verticalmente
        break;

    //figura de 3 cuadrados plana azul
    case 3:
        pieza.inversion = 2; // 2 para las piezas invertidas verticalmente
        break;

    //figura de 3 cuadrados en forma de frisby verde
    case 4:

        pieza.inversion = 2; // 2 para las piezas invertidas verticalmente
        (*(*(pieza.figura+0)+0)) = '0';
        (*(*(pieza.figura+0)+1)) = '0';
        (*(*(pieza.figura+1)+0)) = ' ';
        (*(*(pieza.figura+1)+1)) = '0';
        break;

    //figura de 4 cuadrados en forma de L roja
    case 5:

        pieza.inversion = 2; // 2 para las piezas invertidas verticalmente
        (*(*(pieza.figura+0)+0)) = '0';
        (*(*(pieza.figura+0)+1)) = '0';
        (*(*(pieza.figura+0)+2)) = '0';
        (*(*(pieza.figura+1)+0)) = '0';
        (*(*(pieza.figura+1)+1)) = ' ';
        (*(*(pieza.figura+1)+2)) = ' ';
        break;

    //figura de 4 cuadrados verde
    case 6:
         pieza.inversion = 2; // 2 para las piezas invertidas verticalmente
        (*(*(pieza.figura+0)+0)) = ' ';
        (*(*(pieza.figura+0)+1)) = '0';
        (*(*(pieza.figura+0)+2)) = ' ';
        (*(*(pieza.figura+1)+0)) = '0';
        (*(*(pieza.figura+1)+1)) = '0';
        (*(*(pieza.figura+1)+2)) = '0';
        break;

    //figura de 4 cuadrados azul
    case 7:
        pieza.inversion = 2; // 2 para las piezas invertidas verticalmente
        (*(*(pieza.figura+0)+0)) = ' ';
        (*(*(pieza.figura+0)+1)) = '0';
        (*(*(pieza.figura+1)+1)) = '0';
        (*(*(pieza.figura+1)+1)) = '0';
        (*(*(pieza.figura+2)+0)) = '0';
        (*(*(pieza.figura+2)+1)) = ' ';
        break;

    //figura de 5 cuadrados roja
    case 8:

         pieza.inversion = 2; // 2 para las piezas invertidas verticalmente
        (*(*(pieza.figura+0)+0)) = '0';
        (*(*(pieza.figura+0)+1)) = '0';
        (*(*(pieza.figura+0)+2)) = '0';
        (*(*(pieza.figura+1)+0)) = ' ';
        (*(*(pieza.figura+1)+1)) = '0';
        (*(*(pieza.figura+1)+2)) = ' ';
        (*(*(pieza.figura+2)+0)) = ' ';
        (*(*(pieza.figura+2)+1)) = '0';
        (*(*(pieza.figura+2)+2)) = ' ';

        break;

    //figura de 5 cuadrados en forma de serpiente verde
    case 9:
        pieza.inversion = 2; // 2 para las piezas invertidas verticalmente
        (*(*(pieza.figura+0)+0)) = ' ';
        (*(*(pieza.figura+0)+1)) = '0';
        (*(*(pieza.figura+0)+2)) = '0';
        (*(*(pieza.figura+1)+0)) = ' ';
        (*(*(pieza.figura+1)+1)) = '0';
        (*(*(pieza.figura+1)+2)) = ' ';
        (*(*(pieza.figura+2)+0)) = '0';
        (*(*(pieza.figura+2)+1)) = '0';
        (*(*(pieza.figura+2)+2)) = ' ';
        break;

    //figura de 5 cuadrados en forma de C azul
    case 10:
         pieza.inversion = 2; // 2 para las piezas invertidas verticalmente
        (*(*(pieza.figura+0)+0)) = '0';
        (*(*(pieza.figura+0)+1)) = '0';
        (*(*(pieza.figura+0)+2)) = '0';
        (*(*(pieza.figura+1)+0)) = '0';
        (*(*(pieza.figura+1)+1)) = ' ';
        (*(*(pieza.figura+1)+2)) = '0';
        break;

    }
}


