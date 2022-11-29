#include <iostream>
#include "Contenido.h"
#include "Serie.h"
#include "Pelicula.h"
#include "Episodio.h"
#include <vector>

using namespace std;

void menu(){ //Main menu
	cout<<"Bienvenido xd"<<endl;
	cout<<"* Mostrar Peliculas "<<endl;
	cout<<"* Mostrar series"<<endl;
	cout<<"* Comparar vistas de Peliculas"<< endl;
	cout<<"Cualquier numero. -Salida"<<endl;
}

void menuSeries(){
    cout<<"¿Que serie quieres ver? "<<endl;
    cout<<"1) Game of thrones "<<endl;
	cout<<"2) House of the Dragon"<<endl;
	cout<<"Cualquier numero. -Regresar al menu"<<endl;
}

int main()
{
    int opc; // Variable para elegir una opcion
	opc=1;
	int opc2 = 1;

    int keep; // Variable para el ciclo 
	keep=0;

	// Objetos para agregar
	Episodio got1(1,36.12), got2(2,40.45), got3(3,38.2);
	Fecha dgot(15,7,2022);
	Episodio hotd1(1,22.41), hotd2(2,30.22), hotd3(3,19.46);
	Fecha dhotd(24,3,2022);


	while(keep ==0){ //Ciclo con el Menu
		menu();
		cin>>opc;

		if(opc==1){
		    //Mostrar informacion de la pelicula
		    vector <Contenido*> Contenidos;
		    Contenidos.push_back(new Pelicula("Batman Begins", "Accion", 281868, 5, 120.60));
		    Contenidos.push_back(new Pelicula("Son como niños", "Comedia", 281654, 3, 200.45));
		    Contenidos.push_back(new Pelicula("Avengers", "Superheroes", 287462, 4, 198.14));


		    vector <Contenido*>::const_iterator i;
		    for (i = Contenidos.begin(); i != Contenidos.end(); i++){
                    cout<<(*i)->printInfo()<<endl;
		    }
		}
		
        //Show series information
    
		else if(opc==2){
            int keep2=0;

            while(keep2 == 0){
                menuSeries();
                cin>>opc2;

                if(opc2==1){
                    vector <Contenido*> Contenidos;
                    Contenidos.push_back(new Serie("Game of Thrones", "Drama", 659541, 5, got1, 1, dgot));
                    Contenidos.push_back(new Serie("Game of Thrones", "Drama", 659541, 5, got2, 1, dgot));
                    Contenidos.push_back(new Serie("Game of Thrones", "Drama", 659541, 5, got3, 1, dgot));

                    vector <Contenido*>::const_iterator i;
                    for (i = Contenidos.begin(); i != Contenidos.end(); i++){
                        cout<<(*i)->printInfo()<<endl;


                    }
                }
                else if(opc2==2){
                    vector <Contenido*> Contenidos;
                    Contenidos.push_back(new Serie("House of the Dragon", "Accion", 625498, 5, hotd1, 1, dhotd));
                    Contenidos.push_back(new Serie("House of the Dragon", "Accion", 625498, 5, hotd2, 1, dhotd));
                    Contenidos.push_back(new Serie("House of the Dragon", "Accion", 625498, 5, hotd3, 1, dhotd));

                    vector <Contenido*>::const_iterator i;
                    for (i = Contenidos.begin(); i != Contenidos.end(); i++){
                        cout<<(*i)->printInfo()<<endl;

                    }
                }
                else{
                    cout<<"No tenemos esa serie xd"<<endl;
                    keep2+=1;
                }

            }
		}
		//Compare the ratings between Peliculas
		else if(opc==3){
                Pelicula mr1("Batman Begins", "Accion", 281868, 5, 120.60);
                Pelicula mr2("Son como niños", "Comedia", 281654, 3, 200.45);
                if(mr1<mr2){
                    cout<<"Batman begins tiene mal rating"<<endl;
                }
                else{
                    cout<<"Batman begins tiene mejor rating"<<endl;
                }


		}
		//Close while loop
		else{
            cout<<"Gracias por usar el programa"<<endl;
            keep+=1;
		}
	}
    return 0;
}