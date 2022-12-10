
//Clase Cliente

#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include <iostream>
using namespace std;

class Cliente
{
    private:
        string nombre;
        string apellido;
        string dirreccion;
        string celular;
    public: 
    //Construcutores con parametros
    Cliente (string apellido_, string nombre_, string dirreccion_, string celular_){
        nombre = nombre_;
        apellido = apellido_;
        dirreccion = dirreccion_;
        celular = celular_;
    }
    //Getters
    string getNombre();
    string getApellido();
    string getDirreccion();
    string getCelular();
    //Setters
    void setNombre(string);
    void setApellido(string);
    void setDirreccion(string);
    void setCelular(string);
    void imprimirInfo();
};

string Cliente::getNombre(){
    return nombre;
}
string Cliente::getApellido(){
    return apellido;
}
string Cliente::getDirreccion(){
    return dirreccion;
}
string Cliente::getCelular(){
    return celular;
}
void Cliente::setNombre(string nombre_){
    nombre = nombre_;
}
void Cliente::setApellido(string apellido_){
    apellido = apellido_;
}
void Cliente::setDirreccion(string dirreccion_){
    dirreccion = dirreccion_;
}
void Cliente::setCelular(string celular_){
    celular = celular_;
}
void Cliente::imprimirInfo(){
    cout<<"\n\t\t--CLIENTE--\n"<<endl;
	cout<<"\t\tCliente: "<<nombre<<" "<<apellido<<endl;
    cout<<"\t\tDireccion: "<<dirreccion<<endl;
    cout<<"\t\tCelular: "<<celular<<endl;
}

#endif