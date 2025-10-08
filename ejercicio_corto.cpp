#include <iostream>
using namespace std;

int main(){
    int edad;
    int genero; //1 hombre, 2 mujer

    cout <<"Ingrese su edad" << endl;
    cin >> edad;

    if (edad >= 0 && edad <= 10){
        cout <<"La talla es 8" << endl;

    } else if(edad >= 11 && edad <=15){
        cout <<"La talla es 12" << endl;

    } else if (edad >= 16 && edad <= 60){
        cout <<"La talla es 16" << endl;
        
    }else{ 
        cout <<"La talla es 18" << endl;
    }
    
    cout <<"------------------------" << endl;
    cout <<" | 1.Hombre  2. Mujer |" << endl;
    cout <<"------------------------" << endl;
    cout <<"Ingrese su genero" << endl; //solo se acepta 1 o 2
    cin >> genero;

    if(genero == 1){
        cout <<"Las mejores prendas disponibles para hombre son: " << endl;
        cout <<"Camisa casual" << endl;
        cout <<"Pantalon de vesti negro" << endl;
        cout <<"Zapatos deportivs" << endl;
    
    }else if (genero == 2){
        cout <<"Las mejores prendas disponibles para mujer son: " << endl;
        cout <<"Blusa negra de vestir" << endl;
        cout <<"Falda formal" << endl;
        cout <<"Zapato de tacon" << endl;
    }else {
        cout <<"Todas las prendas disponobles son: " << endl;
        cout <<"Camisa casual" << endl;
        cout <<"Pantalon de vesti negro" << endl;
        cout <<"Zapatos deportivs" << endl;
        cout <<"Blusa negra de vestir" << endl;
        cout <<"Falda formal" << endl;
        cout <<"Zapato de tacon" << endl;

    }
    return 0;
}