#include <iostream>
#include <string>
#include <cstdlib>
#include "Ticket.h"
#include "Comida.h"
using namespace std;


void menu(){ //Menu de lo que puede hacer el programa 
	
		cout<<"\n\n\n\t\t Bienvenido al programa de Facturas online\n"<<endl;
		cout<<"\t\t 1 - Realiza factura del cliente 1 "<<endl;
		cout<<"\t\t 2 - Realiza factura del cliente 2 "<<endl;
		cout<<"\t\t 3 - Realiza factura del cliente 3"<<endl;
		cout<<"\t\t Cualquier numero - Salir"<<endl;
	
}

int main() {
	
	int opcion; //variable para escoger opcion de salir o empezar
	opcion=1;
	
	int continua;//variable para ciclar el prgrama
	continua=0;
	
	while(continua ==0){ //ciclo del programa
		menu();
		cin>>opcion;

        if(opcion==1){

            //Creo el objeto de la clase producto
            Producto producto1 ("Mouse",350, 5);
            Producto producto2 ("CPU",1050, 2);
            //Creo el objeto de cliente
            Cliente cliente1 ("Viveros", "Eduardo", "CuatroCaminos","4427998086");
            //Le agrego el numero de folio al ticket creando un objeto
            Ticket ticket1 ("959518");
            //Agrego los objetos de producto al ticket
            ticket1.agregarProducto (producto1);
            ticket1.agregarProducto (producto2);
            //Con estos obajetos saco el precio final de cada producto
            producto1.precioFinal();
            producto2.precioFinal();
            //Imprimo los tickets
            producto1.ticket();
            producto2.ticket();
            //Imprimo los datos del cliente
            cliente1.imprimirInfo();
            //Imprimo el numero de folio
            cout<<"\t\tNumero de folio: "<<ticket1.getnumeroFolio()<<endl;

        }
        //Esta opcion es para demostrar que se pueden agregar mas de un 
        //producto
        else if(opcion==2){
            
            Producto producto3 ("Termo",80, 6);
            Producto producto4 ("Mochila",700, 2);
            Producto producto5 ("Compu", 18000,3);
            
            Cliente cliente2 ("Morales", "Miles", "Harlem","4428798684");
            
            Ticket ticket2 ("785241");
            
            //Puedo agregar a ticket los productos que desee 
            ticket2.agregarProducto (producto3);
            ticket2.agregarProducto (producto4);
            ticket2.agregarProducto (producto5);

            producto3.precioFinal();
            producto4.precioFinal();
            producto5.precioFinal();

            producto3.ticket();
            producto4.ticket();
            producto5.ticket();

            cliente2.imprimirInfo();
            
            cout<<"\t\tNumero de folio: "<<ticket2.getnumeroFolio()<<endl;

        }
        else if(opcion==3){
            
            //Utilizo esta clase hija para los productos que sean unicamente de
            //comida y poder decirte las calorias y cantidad de azucar de dichos
            //productos
            Comida comida1 ("Caja Donas (12 donnas)",120, 2, "180.85","230.12");
            Comida comida2 ("Pizza", 110, 3, "260.56", "350.56");
            Comida comida3 ("Hamburguesa", 260, 2, "255.45", "150.63");
            Comida comida4 ("Caja de Paletas Magnum",350, 1,"280", "270.56");

            Cliente cliente3 ("Parker", "Peter","Queens","4848484");
            
            Ticket ticket3 ("789595");
            
            ticket3.agregarProducto (comida1);
            ticket3.agregarProducto (comida2);
            ticket3.agregarProducto (comida3);
            ticket3.agregarProducto (comida4);

            comida1.precioFinal();
            comida1.imprimirComida();
            comida2.precioFinal();
            comida2.imprimirComida();
            comida3.precioFinal();
            comida3.imprimirComida();
            comida4.precioFinal();
            comida4.imprimirComida();
            
            Comida imprimirComida();
            cliente3.imprimirInfo();
            cout<<"\t\tNumero de folio: "<<ticket3.getnumeroFolio()<<endl;

           }
           else{
			cout<<"Gracias por utilizar ese programa"<<endl;
			continua = continua+1;
		}
    }
    return 0;
}
