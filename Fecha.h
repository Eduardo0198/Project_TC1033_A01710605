<<<<<<< HEAD
#ifndef FECHA_H
#define FECHA_H
#include <string>

using namespace std;


class Fecha
{
    public:
        Fecha();
        virtual ~Fecha();
        Fecha(int, int, int);
				
				//Getters
				int getDia();
				int getMes();
				int getAño();

				//Setters
				void setDia(int);
				void setMes(int);
				void setAño(int);
				string calendario();

    protected:

    private:
        int Dia;
				int Mes;
				int Año;
};

=======
#ifndef FECHA_H
#define FECHA_H
#include <string>

using namespace std;


class Fecha
{
    public:
        Fecha();
        virtual ~Fecha();
        Fecha(int, int, int);
				
				//Getters
				int getDia();
				int getMes();
				int getAño();

				//Setters
				void setDia(int);
				void setMes(int);
				void setAño(int);
				string calendario();

    protected:

    private:
        int Dia;
				int Mes;
				int Año;
};

>>>>>>> aa2b453f243a3d9c06057fa3fd271c3df9b9c56b
#endif 