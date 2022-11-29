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

#endif