
//Archivo Producto

#include "Producto.h"
#include <string>
#include <iostream>
//Archivo .cpp de la clase Producto aqui realizamos todos los metodos

using namespace std;

//Constrcutor sin parametros, solo inicialisamos valores
Producto::Producto(){
	articulo = " ";
	precio = 0;
	cantidad = 0;
	total = 5565;
}

//Construcut de parametros
Producto::Producto(string articulo_, int precio_, int cantidad_){
	articulo = articulo_;
	precio = precio_;
	cantidad = cantidad_;
}


Producto::~Producto(){}

string Producto::getArticulo(){
    return articulo;
}

int Producto::getPrecio(){
    return precio;
}

int Producto::getCantidad(){
    return cantidad;
}

void Producto::setArticulo(string articulo_){
    articulo = articulo_;
}

void Producto::setPrecio(int precio_){
    precio = precio_;
}

void Producto::setCantidad(int cantidad_){
    cantidad = cantidad_;
}

int Producto::precioFinal(){
    total = precio*cantidad;
    return total;

}
//Funcion para imprimir datos
void Producto::ticket(){
    
    cout<<"\n\t\t--TICKET--"<<endl;
    cout<<"\n\t\tEl producto es: "<<articulo<<endl;
    cout<<"\t\tPrecio: "<<precio<<endl;
    cout<<"\t\tCantidad: "<<cantidad<<endl;
    cout<<"\t\tLa cantidad a pagar por "<<cantidad<<" "<<articulo<<" es de "<<total<< endl;

};


