
//Clase Comida

#ifndef COMIDA_H
#define COMIDA_H
#include <string>
#include <iostream>
#include "Producto.h"
using namespace std;

//Herencia 
//Hereda atributos de la clase producto
class Comida: public Producto{
    private:
        string calorias;
        string cantidadAzucar;
    public:

     Comida (string articulo_, int precio_, int cantidad_, string calorias_, string cantidadAzucar_):
     Producto (articulo_, precio_, cantidad_){
            calorias = calorias_;
            cantidadAzucar = cantidadAzucar_;
        }
    //Getters
    string getCantidadAzucar();
    string getcalorias();

    //Setters
    void setCantidadAzucar(string);
    void setcalorias(string);
    void imprimirComida();

};

void Comida::imprimirComida(){

    cout<<"\n\t\t--TICKET--\n"<<endl;
	cout<<"\t\tEl producto comida: "<<getArticulo()<<endl;
    cout<<"\t\tPrecio: "<<getPrecio()<<endl;
    cout<<"\t\tCantidad en gramos de azucar del articulo (1 pieza): "<<cantidadAzucar<<endl;
    cout<<"\t\tCantidad de calorias (1 pieza): "<<calorias<<" calorias"<<endl;
    cout<<"\t\tLa cantidad a pagar por "<<getCantidad()<<" "<<getArticulo()<<" es de "<<getPrecio()<< endl;

}

#endif