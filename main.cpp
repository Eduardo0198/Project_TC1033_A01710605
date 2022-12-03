
/* 
Jose Eduardo Viveros Escamilla 
A01710605
PROYECTO TC1030
2/12/2022
Ese programa sirve como factura o ticket de tus compras en linea,
muestra a pantalla el cliente, direccion de entrega, numero para 
contactar, productos que se compraron, la cantidad y el precio.
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include "Cliente.cpp"

using namespace std;


Producto listaPro[100];
int i = 0;


void agregarPro();


void menu(){ //Menu de lo que puede hacer el programa 
	
	cout<<"\n\t\t Bienvenido al programa de Facturas online\n"<<endl;
	cout<<"\t\t 1 - Realiza factura del cliente 1 "<<endl;
	cout<<"\t\t 2 - Realiza factura del cliente 2 "<<endl;
	cout<<"\t\t 3 - Muestra en pantalla los arreglos con producto"<<endl;
	cout<<"\t\t 4 - Realiza tu propia factura\n"<<endl;
	cout<<"\t\t Cualquier numero - Salir"<<endl;
	
}


void agregarPro(){
	
	Producto producto1 ("Caja de donas",15,4); 
	listaPro[0] = producto1;						
	i++;									
	
	Producto producto2 ("Pizza",80,5);
	listaPro[1] = producto2;
	i++;
}

//Cuerpo principal del programa

int main() {
	
	int opcion; //variable para escoger opcion de salir o empezar
	opcion=1;
	
	int continua;//variable para ciclar el prgrama
	continua=0;
	
	while(continua ==0){ //ciclo del programa
		menu();
		cin>>opcion;
		
		// De igual manera se pueden agregar mas clientes, creando mas objetos
		// en este caso lo hice con cliente 1 y 2
		
		if(opcion==1){ //Condicional para escoger una opción
			
			//objeto producto
			Producto producto1("Leche",15,4); 
			
			//objeto cliente composicion de producto
			Cliente cliente1(producto1,"Eduardo","Viveros","Queretaro",45454511,Fecha(3,12));
			cliente1.imprimirInfo();
		}
		else if(opcion==2){
			
			Producto producto2("Pizza",80,5);
			Fecha f1(4,6);
			Cliente cliente2(producto2,"Miles","Morales","New York",565652335,f1);
			cliente2.imprimirInfo();		
		}
		else if(opcion==3){	
			
			//Uso de arreglos para guardar en una variables todos Los datos de un objeto
			// producto
		    agregarPro();

			cout<<"\t\t--ARTICULOS--\n"<<endl;
			cout<<"\t\tArticulo "<<listaPro[0].getArticulo()<<" Precio "<<listaPro[0].getPrecio()<<" Cantidad "<<listaPro[0].getCantidad()<<endl;
			cout<<"\t\tArticulo "<<listaPro[1].getArticulo()<<" Precio "<<listaPro[1].getPrecio()<<" Cantidad "<<listaPro[1].getCantidad()<<endl;		
		}
		else if(opcion==4){
			
			string nomP, nomC, apellC,direcC;
			int precio,cantidad,cellC;
			Producto producto3;
			Cliente cliente3;
			Fecha f3(5,6);  //Composicion
			
			// Los cin solo soportan un string
			cout<<"\t\tIngresa nombre del producto  ";
			cin>>nomP;
			producto3.setArticulo(nomP);
			
			cout<<"\t\tIngresa precio ";
			cin>>precio;
			producto3.setPrecio(precio);
			
			cout<<"\t\tIngresa cantidad ";
			cin>>cantidad;
			producto3.setCantidad(cantidad);
			
			cout<<"\t\t¿Cual es tu nombre? ";
			cin>>nomC;
			cliente3.setNombre(nomC);
			
			cout<<"\t\t¿Cual es tu apellido? ";
			cin>>apellC;
			cliente3.setApellido(apellC);
			
			cout<<"\t\t¿Cual es tu direccion? *Escribe todo junto ";
			cin>>direcC;
			cliente3.setDireccion(direcC);
			
			producto3.ticket();
			cliente3.clienteInfo();

		}
		else{
			cout<<"Gracias por utilizar este programa"<<endl;
			continua = continua+1;
		}
	}

	return 0;
