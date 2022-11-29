<<<<<<< HEAD
#ifndef EPISODIO_H
#define EPISODIO_H
#include <string>

using namespace std;


class Episodio
{
    public:
        Episodio(int, float);
        Episodio();
        virtual ~Episodio();

				//Setters
				void setNum(int);
				void setDuracion(float);

				//Getters
				int getNum();
				float getDuracion();

		string getInfo();

    protected:

    private:
				int num;
				float duracion;
};

=======
#ifndef EPISODIO_H
#define EPISODIO_H
#include <string>

using namespace std;


class Episodio
{
    public:
        Episodio(int, float);
        Episodio();
        virtual ~Episodio();

				//Setters
				void setNum(int);
				void setDuracion(float);

				//Getters
				int getNum();
				float getDuracion();

		string getInfo();

    protected:

    private:
				int num;
				float duracion;
};

>>>>>>> aa2b453f243a3d9c06057fa3fd271c3df9b9c56b
#endif