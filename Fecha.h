
//Clase Fecha

#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;


class Fecha{
	private:
		int dia;
		int mes;

	public:
        //Constrcutor con parametros
        Fecha (int dia_, int mes_){
            dia = dia_;
            mes = mes_;
        }
        Fecha(){
            dia = 3;
	        mes = 10;
        }
		//Getters
		int getDia();
		int getMes();
		
		//Setters
		void setDia(int);
		void setMes(int);
		void calendario();	

};



int Fecha::getMes(){
	return mes;
}
int Fecha::getDia(){
	return dia;
}
void Fecha::setMes(int mes_){
	mes = mes_;
}
void Fecha::setDia(int dia_){
	dia = dia_;
}
void Fecha::calendario(){
	cout<<"\t\tHoy "<<dia<<" de "<<mes<<" del 2022"<<endl;
}

#endif