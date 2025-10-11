#include <iostream>
using namespace std;

int main(){
    
    int opcion;

    cout <<"----------Menu----------"  << endl;
    cout <<"|  1. Salir del juego  |"  << endl;
    cout <<"|  2. Guardar avanze   |"  << endl;
    cout <<"|  3. Ver premios      |"  << endl;
    cout <<"|  4. Ver desafios     |"  << endl;
    cout <<"|  5. Salir del juego  |"  << endl;
    cout <<"------------------------"  << endl;

    //Se puede ingresar del 1 al 5
    cout <<"Ingrese la opcion" << endl;
    cin >> opcion;

    switch(opcion){
        case 1:
             cout <<"Iniciar el juego" << endl;
             break;
        case 2:
             cout <<"Guardar avanze" << endl;
             break;
        case 3:
             cout <<"Ver premios" << endl;
             break;
        case 4:
             cout <<"Ver desafios" << endl;
             break;
        case 5:
             cout <<"Salir del juego" << endl;
             break;
        default:
             cout <<"Numero no valido, intentelo de nuevo" << endl;
    }


    return 0;
}