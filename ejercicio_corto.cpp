#include <iostream>
using namespace std;

int main(){
    int edad;
    int genero; //1 hombre, 2 mujer
    int opcion; //Del 1 al 6
    double precio = 0.0;
    double descuento = 0.0;
    double saldo = 300.0;
    double total = 0.0;
    string prenda;

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
        cout <<"1.Camisa Casual" << endl;
        cout <<"2.Pantalón Formal" << endl;
        cout <<"3.Chaqueta Premium" << endl;
    
    }else if (genero == 2){
        cout <<"Las mejores prendas disponibles para mujer son: " << endl;
        cout <<"4.Blusa Moderna" << endl;
        cout <<"5.Falda Elegante" << endl;
        cout <<"6.Abrigo Premium" << endl;
    }else {
        cout <<"Todas las prendas disponobles son: " << endl;
        cout <<"1.Camisa Casual" << endl;
        cout <<"2.Pantalón Formal" << endl;
        cout <<"3.Chaqueta Premium" << endl;
        cout <<"4.Blusa Moderna" << endl;
        cout <<"5.Falda Elegante" << endl;
        cout <<"6.Abrigo Premium" << endl;
    }

    cout <<"Elije la prenda que desea comprar" <<endl;
    cin >> opcion;

    switch(opcion){
        case 1:
             prenda = "Camisa Casual";
             precio = 90.00;
             descuento = 0.30*precio;
             total = precio - descuento;
             cout <<"La prenda que elegiste es " << prenda << " con un precio de " << precio << "aplicando el descuento del 30% queda en " << total << endl;
             break;
        case 2:
             prenda = "Pantalón Formal";
             precio = 130.00;
             descuento = 0.30*precio;
             total = precio - descuento;
             cout <<"La prenda que elegiste es " << prenda << " con un precio de " << precio << "aplicando el descuento del 30% queda en " << total << endl;
             break;
        case 3:
             prenda = "Chaqueta Premium";
             precio = 900.00;
             descuento = 0.30*precio;
             total = precio - descuento;
             cout <<"La prenda que elegiste es " << prenda << " con un precio de " << precio << "aplicando el descuento del 30 porciento queda en " << total << endl;
             break;
        case 4:
             prenda = "Blusa Moderna";
             precio = 80.00;
             descuento = 0.30*precio;
             total = precio - descuento;
             cout <<"La prenda que elegiste es " << prenda << " con un precio de " << precio << "aplicando el descuento del 30% queda en " << total << endl;
             break;
        case 5:
             prenda = "Falda Elegante";
             precio = 110.00;
             descuento = 0.30*precio;
             total = precio - descuento;
             cout <<"La prenda que elegiste es " << prenda << " con un precio de " << precio << "aplicando el descuento del 30% queda en " << total << endl;
             break;
        case 6:
             prenda = "Abrigo Premium";
             precio = 250.00;
             descuento = 0.30*precio;
             total = precio - descuento;
             cout <<"La prenda que elegiste es " << prenda << " con un precio de " << precio << "aplicando el descuento del 30% queda en " << total << endl;
             break;
        default:
             cout <<"Opcion no valida" << endl;
    }

    //verificar si el usuario tiene saldo suficiente
    if(total > saldo){
        cout <<"No tienes saldo suficiente, te faltan " << total - saldo << endl;
    }else{
        cout <<"Compra exitosa, tu saldo restante es " << saldo - total << endl;
    }

    return 0;
}