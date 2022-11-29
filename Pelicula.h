<<<<<<< HEAD
#ifndef PELICULA_H
#define PELICULA_H
#include <string>
#include <iostream>
#include <Contenido.h>

using namespace std;

class Pelicula : public Contenido
{
    public:
        virtual ~Pelicula();
                Pelicula(string, string, int, int, float);
                string printInfo() override;
                void setLongitud(float);
                float getLongitud();
        bool operator < (const Pelicula & r1);


    protected:

    private:
        float Longitud;
};

=======
#ifndef PELICULA_H
#define PELICULA_H
#include <string>
#include <iostream>
#include <Contenido.h>

using namespace std;

class Pelicula : public Contenido
{
    public:
        virtual ~Pelicula();
                Pelicula(string, string, int, int, float);
                string printInfo() override;
                void setLongitud(float);
                float getLongitud();
        bool operator < (const Pelicula & r1);


    protected:

    private:
        float Longitud;
};

>>>>>>> aa2b453f243a3d9c06057fa3fd271c3df9b9c56b
#endif