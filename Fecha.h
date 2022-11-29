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

#endif 