#include "Pieza.h"

#include <iostream>

using namespace std;

void inicializarTablero (char** tablero){

    int i, j;

    //inicializar primera columnna
    j = 0;
    for (i = 0; i<8; i++){
        (*(*(tablero+i)+j)) = '#';
    }

    //inicializar última columna
    j = 7;
    for (i = 0; i<8; i++){
        (*(*(tablero+i)+j)) = '#';
    }

    //inicializar primera fila
    i = 0;
    for (j = 0; j<8; j++){
        (*(*(tablero+i)+j)) = '#';
    }

    //inicializar última fila
    i = 7;
    for (j = 0; j<8; j++){
        (*(*(tablero+i)+j)) = '#';
    }

    //inicializar espacio disponible para fichas
    for (i = 1; i<7; i++){
        for (j = 1; j<7; j++){
            (*(*(tablero+i)+j)) = ' ';
        }
    }

}

void imprimirTablero(char** tablero){

    cout<<endl<<endl<<"  TABLERO DE JUEGO"<<endl;

    for (int i = 0; i<8; i++){
        cout<<endl;
        for (int j = 0; j<8; j++){
            if(j==0){
                cout<<"   ";
            }
            if(j>0 && j<7){
                cout<<(*(*(tablero+i)+j));
            }
            cout<<(*(*(tablero+i)+j));
        }
        if (i>0 && i<7){
            cout<<endl;
            for (int j = 0; j<8; j++){
                if(j==0){
                    cout<<"   ";
                }
                if(j>0 && j<7){
                    cout<<(*(*(tablero+i)+j));
                }
                cout<<(*(*(tablero+i)+j));
            }
        }
    }
}

void liberarMemoria(char** tablero, Pieza* piezas){

    //liberar memoria para el tablero
    for (int j = 0; j < 8; j++){
        delete[] *(tablero+j);
    }

    delete[] tablero;
    tablero = NULL;

    for (int i=0; i<10;i++){
        restablecerPieza(*(piezas+i));
    }

    //liberar memoria para el arreglo de piezas
    delete[] piezas;
    piezas = NULL;
}

void agregarPieza(char** tablero, Pieza& pieza, int x, int y){

    char color = ' ';
    if (pieza.color == "Azul"){
        color = 'X';
    }else if (pieza.color == "Verde"){
        color = 'O';
    }else if(pieza.color == "Rojo"){
        color = 'H';
    }

    inicializarCoordenadaPieza(pieza,x,y);

    for (int i = 0; i<pieza.filas; i++){
        for (int j = 0; j<pieza.columnas; j++){
                if ( (*(*(pieza.figura+i)+j)) == '0' ){
                    (*(*(tablero+y)+x)) = color;
                }else{
                    (*(*(tablero+y)+x)) = (*(*(pieza.figura+i)+j));
                }
            x++;
        }
        y++;
        x = x - pieza.columnas;
    }
}

void mostrarPieza(Pieza& pieza){

    char color = ' ';
    if (pieza.color == "Azul"){
        color = 'X';
    }else if (pieza.color == "Verde"){
        color = 'O';
    }else if(pieza.color == "Rojo"){
        color = 'H';
    }

    for (int i = 0; i<pieza.filas; i++){
        cout<<endl;
        for (int j = 0; j<pieza.columnas; j++){
            if ( (*(*(pieza.figura+i)+j)) == '0'){
                cout<<color<<color;
            }else{
                cout<<(*(*(pieza.figura+i)+j));
                cout<<(*(*(pieza.figura+i)+j));
            }
        }

        cout<<endl;
        for (int j = 0; j<pieza.columnas; j++){
            if ( (*(*(pieza.figura+i)+j)) == '0'){
                cout<<color<<color;
            }else{
                cout<<(*(*(pieza.figura+i)+j));
                cout<<(*(*(pieza.figura+i)+j));
            }
        }
    }
    cout<<endl<<endl;
}

bool validarCoordenada(Pieza& pieza, int x, int y){
    if (x>=1 && x<=4 && y>=1 && y<=4){
        return true;
    }else{
        if (pieza.tamano == 1){
            return true;
        }else{
            int tamano_x, tamano_y;
            tamano_x = x + pieza.columnas;
            tamano_y = y + pieza.filas;
            tamano_x--;
            tamano_y--;
            if (tamano_x>6 || tamano_y > 6){
                return false;
            }else{
                return true;
            }
        }
    }
}

int main(){

    //crear tablero
    char** tablero = new char*[8];

    for (int i = 0; i < 8; i++){
        *(tablero+i) = new char[8];
    }
    //inicializar sus valores
    inicializarTablero(tablero);

    imprimirTablero(tablero);

    cout<<endl;

    //crear arreglo dinámico de piezas
    Pieza* piezas = new Pieza[10];

    //crear todas las piezas
    for (int i=0; i<10;i++){
        crearPieza(*(piezas+i), i+1);
    }

    cout<<endl<<"Por favor seleccione una de las siguientes piezas"<<endl<<endl;

     //mostrar todas las piezas
    for (int i=0; i<10;i++){
        cout<<"Ficha "<<i+1<<endl;
        mostrarPieza(*(piezas+i));
        cout<<endl<<endl;
    }

    //usuario elige la ficha
    int ficha;
    cout<<endl<<"Escriba el numero de ficha para agregar en tablero: "<<endl;
    cin>>ficha;

    while (ficha<1 || ficha>10){
        cout<<endl<<endl<<"Numero de ficha no valido"<<endl;
        cout<<endl<<"Escriba el numero de ficha para agregar en tablero: "<<endl;
        cin>>ficha;
    }

    ficha--;

    //se muestran diferentes posiciones para la ficha seleccionada

    cout<<endl<<endl<<"Diferentes posiciones para ubicar la ficha"<<endl<<endl;

    cout<<"Rotada 0 grados hacia la derecha (digite 0 para elegir esta posicion)"<<endl;
    mostrarPieza(*(piezas+ficha));

    cout<<"Rotada 90 grados hacia la derecha (digite 1 para elegir esta posicion)"<<endl;
    rotarPieza (*(piezas+ficha), 90);
    mostrarPieza(*(piezas+ficha));
    restablecerPieza(*(piezas+ficha));
    crearPieza(*(piezas+ficha), ficha+1);

    cout<<"Rotada 180 grados hacia la derecha (digite 2 para elegir esta posicion)"<<endl;
    rotarPieza (*(piezas+ficha), 180);
    mostrarPieza(*(piezas+ficha));
    restablecerPieza(*(piezas+ficha));
    crearPieza(*(piezas+ficha), ficha+1);

    cout<<"Rotada 270 grados hacia la derecha (digite 3 para elegir esta posicion)"<<endl;
    rotarPieza (*(piezas+ficha), 270);
    mostrarPieza(*(piezas+ficha));
    restablecerPieza(*(piezas+ficha));
    crearPieza(*(piezas+ficha), ficha+1);

    cout<<"Invertida horizontalmente (digite 4 para elegir esta posicion)"<<endl;
    invertirPiezaHorizontalmente (*(piezas+ficha), ficha+1);
    mostrarPieza(*(piezas+ficha));
    restablecerPieza(*(piezas+ficha));
    crearPieza(*(piezas+ficha), ficha+1);

    cout<<"Invertida verticalmente (digite 5 para elegir esta posicion)"<<endl;
    invertirPiezaVerticalmente (*(piezas+ficha), ficha+1);
    mostrarPieza(*(piezas+ficha));
    restablecerPieza(*(piezas+ficha));
    crearPieza(*(piezas+ficha), ficha+1);

    //usuario elige la posicion para la pieza
    int eleccion;
    cout<<endl<<"Digite el numero respectivo para la posicion de la pieza: "<<endl;
    cin>>eleccion;

    while (eleccion<0 || eleccion>5){
        cout<<endl<<endl<<"Numero de posicion no valido"<<endl;
        cout<<endl<<"Digite el numero respectivo para la posicion de la pieza: "<<endl;
        cin>>eleccion;
    }

    //de acuerdo a la posicion seleccionada se pone a la figura de la pieza en dicha posicion
    switch(eleccion){
        case 0:
        break;

        case 1:
            rotarPieza (*(piezas+ficha), 90);
        break;

        case 2:
            rotarPieza (*(piezas+ficha), 180);
        break;

        case 3:
            rotarPieza (*(piezas+ficha), 270);
        break;

        case 4:
            invertirPiezaHorizontalmente (*(piezas+ficha), ficha+1);
        break;

        case 5:
            invertirPiezaVerticalmente (*(piezas+ficha), ficha+1);
        break;

    }

    //se piden coordenadas donde se va a ubicar esquina superior de la figura

    int x, y;
    cout<<endl<<endl;
    cout<<"Digite coordenada para ubicar la esquina superior de la ficha en el tablero"<<endl;
    //la coordenada corresponde al número de fila
    cout<<endl<<"Coordenada para la fila (entre 1 y 6): ";
    cin>>y;
    //la coordenada corresponde al número de columna
    cout<<endl<<"Coordenada para la columna (entre 1 y 6): ";
    cin>>x;

    //mientras esa coordenada se salgan de los limites se vuelven a solicitar

    while( x<1 || x>6 || y<1 || y>6 ){
        cout<<endl<<endl<<"Coordenadas no validas"<<endl<<endl;
        cout<<"Digite coordenada para ubicar la esquina superior de la ficha en el tablero"<<endl;
        //la coordenada corresponde al número de fila
        cout<<endl<<"Coordenada para la fila (entre 1 y 6): ";
        cin>>y;
        //la coordenada corresponde al número de columna
        cout<<endl<<"Coordenada para la columna (entre 1 y 6): ";
        cin>>x;
    }

    //ahora se valida si toda la pieza puede ubicarse dentro del tablero

    bool b = validarCoordenada(*(piezas+ficha), x, y);

    //mientras no se puede insertar la ficha en la coordenada se vuelve a pedir otra

    while (b == false){
        cout<<endl<<endl<<"No se pudo insertar la ficha"<<endl<<endl;
        cout<<"Digite otra coordenada para ubicar la esquina superior de la pieza en el tablero"<<endl;
        //la coordenada corresponde al número de fila
        cout<<endl<<"Coordenada para la fila (entre 1 y 6): ";
        cin>>y;
        //la coordenada corresponde al número de columna
        cout<<endl<<"Coordenada para la columna (entre 1 y 6): ";
        cin>>x;
        b = validarCoordenada(*(piezas+ficha), x, y);
    }

    cout<<endl<<endl<<"Esquina superior de la pieza se situara en coordenada "<<y<<"-"<<x<<endl<<endl;

    //agregar pieza al tablero
    agregarPieza(tablero, *(piezas+ficha), x, y);

    cout<<endl<<endl<<"Enseguida se muestra el tablero con la ficha seleccionada agregada"<<endl<<endl;
    //imprimir el tablero con esa pieza
    imprimirTablero(tablero);

    cout<<endl<<endl;
    cout<<endl<<endl<<"Gracias por jugar. Hasta pronto"<<endl<<endl;

    //liberar memoria de tablero y arreglo de piezas
    borrarCoordenada(*(piezas+ficha));
    liberarMemoria(tablero, piezas);

    return 0;
}
